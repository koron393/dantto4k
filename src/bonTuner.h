#pragma once
#include <vector>
#include <mutex>
#include "IBonDriver2.h"
#include "config.h"
#ifdef __linux__
#include "typedef.h"
#endif

class CBonTuner : public IBonDriver2
{
public:
	virtual ~CBonTuner() {};

	bool init();

	// IBonDriver
	const bool OpenTuner(void);
	void CloseTuner(void);

	const bool SetChannel(const uint8_t bCh);
	const float GetSignalLevel(void);

	const uint32_t WaitTsStream(const uint32_t dwTimeOut = 0);
	const uint32_t GetReadyCount(void);

	const bool GetTsStream(uint8_t* pDst, uint32_t* pdwSize, uint32_t* pdwRemain);
	const bool GetTsStream(uint8_t** ppDst, uint32_t* pdwSize, uint32_t* pdwRemain);

	void PurgeTsStream(void);

	// IBonDriver2
	const char* GetTunerName(void);

	const bool IsTunerOpening(void);

	const char* EnumTuningSpace(const uint32_t dwSpace);
	const char* EnumChannelName(const uint32_t dwSpace, const uint32_t dwChannel);

	const bool SetChannel(const uint32_t dwSpace, const uint32_t dwChannel);

	const uint32_t GetCurSpace(void);
	const uint32_t GetCurChannel(void);

	void Release(void);

protected:
	IBonDriver2* pBonDriver2;
	std::vector<uint8_t> inputBuffer;
	std::mutex mutex;
};
