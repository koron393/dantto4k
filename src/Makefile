PREFIX = /usr

OBJS	= \
	acascard.o \
	accessControlDescriptor.o \
	adtsConverter.o \
	aribUtil.o \
	audioMfuDataProcessor.o \
	applicationMfuDataProcessor.o \
	caMessage.o \
	compressedIPPacket.o \
	config.o \
	contentCopyControlDescriptor.o \
	dantto4k.o \
	dataTransmissionMessage.o \
	dataUnit.o ecm.o \
	eventPackageDescriptor.o \
	extensionHeaderScrambling.o \
	fragmentAssembler.o ipv6.o m2SectionMessage.o m2ShortSectionMessage.o \
	mfuDataProcessorFactory.o \
	mhAudioComponentDescriptor.o \
	mhEit.o \
	mhSeriesDescriptor.o \
	mhBit.o \
	mhEventGroupDescriptor.o \
	mhServiceDescriptor.o \
	mhBroadcasterNameDescriptor.o \
	mhExtendedEventDescriptor.o \
	mhServiceListDescriptor.o \
	mhCaContractInformation.o \
	mhLinkageDescriptor.o \
	mhShortEventDescriptor.o \
	mhCdt.o \
	mhLogoTransmissionDescriptor.o \
	mhSiParameterDescriptor.o \
	mhContentDescriptor.o \
	mhParentalRatingDescriptor.o \
	mhStreamIdentificationDescriptor.o \
	mhDataComponentDescriptor.o \
	mhSdt.o \
	mhTot.o \
	mmt.o \
	mmtDescriptorFactory.o \
	mmtDescriptors.o \
	mmtGeneralLocationInfo.o \
	mmtStream.o \
	mmtTableFactory.o \
	mmtTlvDemuxer.o \
	mpt.o \
	mpu.o \
	mpuExtendedTimestampDescriptor.o \
	mpuTimestampDescriptor.o \
	multimediaServiceInformationDescriptor.o \
	networkNameDescriptor.o \
	nit.o \
	ntp.o \
	paMessage.o \
	pesPacket.o \
	plt.o \
	relatedBroadcasterDescriptor.o \
	remoteControlKeyDescriptor.o \
	remuxerHandler.o \
	serviceListDescriptor.o \
	signalingMessage.o \
	smartcard.o \
	stream.o \
	subtitleMfuDataProcessor.o \
	systemManagementDescriptor.o \
	timebase.o \
	timeUtil.o \
	tlv.o \
	tlvDescriptorFactory.o \
	tlvDescriptors.o \
	tlvTableFactory.o \
	transmissionControlSignal.o \
	tsARIBCharset.o \
	tsARIBCharsetData.o \
	tsARIBCharsetEncoding.o \
	videoComponentDescriptor.o \
	videoMfuDataProcessor.o

PROGRAM		= dantto4k

CXX		= clang++
LD		= clang++

CPPFLAGS	+= `pkg-config libpcsclite --cflags`
CPPFLAGS	+= `pkg-config tsduck --cflags`
CPPFLAGS	+= `pkg-config libcrypto --cflags`
CPPFLAGS	+= -march=native -O2 -pipe
CPPFLAGS	+= -Wall -std=c++20 -ggdb3

LDFLAGS		+= -stdlib=libstdc++
LDFLAGS		+= `pkg-config libpcsclite --libs`
LDFLAGS		+= `pkg-config tsduck --libs`
LDFLAGS		+= `pkg-config libcrypto --libs`
LDFLAGS		+= -fuse-ld=lld -Wl,-O2 -Wl,--as-needed -Wl,--undefined-version

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(PROGRAM)

clean:
	rm -rf $(OBJS) $(PROGRAM)

install:
	install -d ${DESTDIR}/$(PREFIX)/bin
	install -m 755 $(PROGRAM) ${DESTDIR}/$(PREFIX)/bin
