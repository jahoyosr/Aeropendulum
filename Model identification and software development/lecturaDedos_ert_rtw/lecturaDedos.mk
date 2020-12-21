###########################################################################
## Makefile generated for Simulink model 'lecturaDedos'. 
## 
## Makefile     : lecturaDedos.mk
## Generated on : Fri Nov 11 16:33:26 2016
## MATLAB Coder version: 3.1 (R2016a)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/lecturaDedos.elf
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.

PRODUCT_NAME              = lecturaDedos
MAKEFILE                  = lecturaDedos.mk
COMPUTER                  = PCWIN64
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2016a
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2016a/bin
MATLAB_ARCH_BIN           = C:/PROGRA~1/MATLAB/R2016a/bin/win64
MASTER_ANCHOR_DIR         = 
START_DIR                 = C:/Users/i95sa/DOCUME~1/UNIVER~1/SEMEST~1/TCNICA~1/proyecto/CARACT~1
ARCH                      = win64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODELREF_LINK_RSPFILE_NAME = lecturaDedos_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ..

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Arduino AVR v1.6.1 | gmake (64-bit Windows)
# Supported Version(s):    
# ToolchainInfo Version:   R2016a
# Specification Revision:  1.0
# 

DERIVED_SRCS = $(subst .o,.dep,$(OBJS))

build:

%.dep:



-include codertarget_assembly_flags.mk
-include *.dep


#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# ARDUINO_ROOT
# ARDUINO_PORT
# ARDUINO_MCU
# ARDUINO_BAUD
# ARDUINO_PROTOCOL
# ARDUINO_F_CPU

#-----------
# MACROS
#-----------

SHELL            = %SystemRoot%/system32/cmd.exe
PRODUCT_HEX      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).hex
PRODUCT_BIN      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).eep
ARDUINO_TOOLS    = $(ARDUINO_ROOT)/hardware/tools/avr/bin
ELF2EEP_OPTIONS  = -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0
DOWNLOAD_ARGS    =  >tmp.trash 2>&1 -P$(ARDUINO_PORT) -V -q -q -q -q -F -C$(ARDUINO_ROOT)/hardware/tools/avr/etc/avrdude.conf -p$(ARDUINO_MCU) -c$(ARDUINO_PROTOCOL) -b$(ARDUINO_BAUD) -D -Uflash:w:

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: Arduino AVR Assembler
AS_PATH = $(ARDUINO_TOOLS)
AS = $(AS_PATH)/avr-as

# C Compiler: Arduino AVR C Compiler
CC_PATH = $(ARDUINO_TOOLS)
CC = $(CC_PATH)/avr-gcc

# Linker: Arduino AVR Linker
LD_PATH = $(ARDUINO_TOOLS)
LD = $(LD_PATH)/avr-gcc

# C++ Compiler: Arduino AVR C++ Compiler
CPP_PATH = $(ARDUINO_TOOLS)
CPP = $(CPP_PATH)/avr-g++

# C++ Linker: Arduino AVR C++ Linker
CPP_LD_PATH = $(ARDUINO_TOOLS)
CPP_LD = $(CPP_LD_PATH)/avr-gcc

# Archiver: Arduino AVR Archiver
AR_PATH = $(ARDUINO_TOOLS)
AR = $(AR_PATH)/avr-ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)
MEX = $(MEX_PATH)/mex

# Binary Converter: Binary Converter
OBJCOPY_PATH = $(ARDUINO_ROOT)/hardware/tools/avr/bin
OBJCOPY = $(OBJCOPY_PATH)/avr-objcopy

# Hex Converter: Hex Converter
OBJCOPY_PATH = $(ARDUINO_ROOT)/hardware/tools/avr/bin
OBJCOPY = $(OBJCOPY_PATH)/avr-objcopy

# Download: Download
DOWNLOAD_PATH = $(ARDUINO_TOOLS)
DOWNLOAD = $(DOWNLOAD_PATH)/avrdude

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = $(MAKE_PATH)/gmake


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      =
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = rcs
ASFLAGS              =
OBJCOPYFLAGS_BIN     = $(ELF2EEP_OPTIONS) $(PRODUCT) $(PRODUCT_BIN)
CFLAGS               = -c \
                       -g \
                       -w \
                       -ffunction-sections \
                       -fdata-sections  \
                       -MMD \
                       -DARDUINO=10601  \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -Os
CPPFLAGS             = -fno-exceptions -fno-threadsafe-statics  \
                       -c \
                       -g \
                       -w \
                       -ffunction-sections \
                       -fdata-sections  \
                       -MMD \
                       -DARDUINO=10601  \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -Os
CPP_LDFLAGS          =  -w -Os -Wl,--gc-sections,--relax
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       = $(DOWNLOAD_ARGS)$(PRODUCT_HEX):i
EXECUTE_FLAGS        =
OBJCOPYFLAGS_HEX     = -O ihex -R .eeprom $(PRODUCT) $(PRODUCT_HEX)
LDFLAGS              =  -w -Os -Wl,--gc-sections,--relax
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    =

#--------------------
# File extensions
#--------------------

OBJ_EXT             = .o
ASM_EXT             = .s
AS_EXT              = .asm
C_DEP               = .dep
H_EXT               = .h
OBJ_EXT             = .o
C_EXT               = .c
EXE_EXT             = .elf
SHAREDLIB_EXT       =
C_DEP               = .dep
HPP_EXT             = .hpp
OBJ_EXT             = .o
CPP_EXT             = .cpp
EXE_EXT             =
SHAREDLIB_EXT       =
STATICLIB_EXT       = .a
MEX_EXT             = .mexw64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/lecturaDedos.elf
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -IC:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinobase/include -IC:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinobase/blocks/sfcn/include -I$(MATLAB_ROOT)/simulink/include/sf_runtime -I$(START_DIR)/lecturaDedos_ert_rtw -I$(START_DIR) -IC:/Users/i95sa/DOCUME~1/UNIVER~1/SEMEST~1/SENSOR~1/proyecto -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils -I$(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino -I$(ARDUINO_ROOT)/hardware/arduino/avr/variants/mega -IC:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinotarget/registry/../include -IC:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DMODEL=lecturaDedos -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DON_TARGET_WAIT_FOR_START=1 -DONESTEPFCN=1 -DEXT_MODE=1 -DTERMFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DRT -DSTACK_SIZE=64 -DMW_TIMERID=5 -DMW_PRESCALAR=256 -DMW_TIMERCOUNT=62411 -DMW_SCHEDULERCOUNTER=1 -D_RTT_BAUDRATE_SERIAL0_=9600 -D_RTT_BAUDRATE_SERIAL1_=9600 -D_RTT_BAUDRATE_SERIAL2_=9600 -D_RTT_BAUDRATE_SERIAL3_=9600 -D_RTT_ANALOG_REF_=0
DEFINES_BUILD_ARGS = -DONESTEPFCN=1 -DEXT_MODE=1 -DTERMFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0
DEFINES_IMPLIED = -DTID01EQ=0
DEFINES_OPTS = -DON_TARGET_WAIT_FOR_START=1
DEFINES_SKIPFORSIL = -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DRT -DSTACK_SIZE=64
DEFINES_STANDARD = -DMODEL=lecturaDedos -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_IMPLIED) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/lecturaDedos_ert_rtw/lecturaDedos.c $(START_DIR)/lecturaDedos_ert_rtw/lecturaDedos_data.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_svr.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/hooks.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WInterrupts.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_analog.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_digital.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_pulse.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_shift.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/abi.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/CDC.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial0.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial1.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial2.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial3.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HID.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/IPAddress.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/new.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Print.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Stream.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Tone.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/USBCore.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WMath.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WString.cpp C:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinotarget/registry/../src/MW_ArduinoHWInit.cpp C:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinobase/src/io_wrappers.cpp C:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/src/arduinoAVRScheduler.cpp $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/ext_serial_pkt.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/rtiostream_serial_interface.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/ext_svr_serial_transport.c C:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinotarget/registry/../src/rtiostream_serial.cpp

MAIN_SRC = $(START_DIR)/lecturaDedos_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = lecturaDedos.o lecturaDedos_data.o ext_svr.o updown.o ext_work.o rtiostream_utils.o hooks.o WInterrupts.o wiring.o wiring_analog.o wiring_digital.o wiring_pulse.o wiring_shift.o abi.o CDC.o HardwareSerial.o HardwareSerial0.o HardwareSerial1.o HardwareSerial2.o HardwareSerial3.o HID.o IPAddress.o new.o Print.o Stream.o Tone.o USBCore.o WMath.o WString.o MW_ArduinoHWInit.o io_wrappers.o arduinoAVRScheduler.o ext_serial_pkt.o rtiostream_serial_interface.o ext_svr_serial_transport.o rtiostream_serial.o

MAIN_OBJ = ert_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL = -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR -D_RUNONTARGETHARDWARE_BUILD_ -D_ROTH_MEGA2560_
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL = -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR -D_RUNONTARGETHARDWARE_BUILD_ -D_ROTH_MEGA2560_
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild postbuild download execute


all : build postbuild
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


postbuild : build
	@echo "### Invoking postbuild tool "Binary Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_BIN)
	@echo "### Done invoking postbuild tool."
	@echo "### Invoking postbuild tool "Hex Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_HEX)
	@echo "### Done invoking postbuild tool."


download : postbuild
	@echo "### Invoking postbuild tool "Download" ..."
	$(DOWNLOAD) $(DOWNLOAD_FLAGS)
	@echo "### Done invoking postbuild tool."


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/lecturaDedos_ert_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/lecturaDedos_ert_rtw/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(START_DIR)/lecturaDedos_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


hooks.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/hooks.c
	$(CC) $(CFLAGS) -o "$@" "$<"


WInterrupts.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WInterrupts.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_analog.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_analog.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_digital.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_digital.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_pulse.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_pulse.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_shift.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_shift.c
	$(CC) $(CFLAGS) -o "$@" "$<"


abi.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/abi.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


CDC.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/CDC.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial0.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial0.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial1.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial1.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial2.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial2.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial3.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial3.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HID.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HID.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


IPAddress.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/IPAddress.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


new.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/new.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Print.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Print.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Stream.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Stream.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Tone.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Tone.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


USBCore.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/USBCore.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


WMath.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WMath.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


WString.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WString.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_ArduinoHWInit.o : C:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinotarget/registry/../src/MW_ArduinoHWInit.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


io_wrappers.o : C:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinobase/src/io_wrappers.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


arduinoAVRScheduler.o : C:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/src/arduinoAVRScheduler.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


ext_serial_pkt.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/ext_serial_pkt.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtiostream_serial_interface.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/rtiostream_serial_interface.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ext_svr_serial_transport.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/ext_svr_serial_transport.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtiostream_serial.o : C:/MATLAB/SupportPackages/R2016a/toolbox/target/supportpackages/arduinotarget/registry/../src/rtiostream_serial.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### OBJCOPYFLAGS_BIN = $(OBJCOPYFLAGS_BIN)"
	@echo "### OBJCOPYFLAGS_HEX = $(OBJCOPYFLAGS_HEX)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(RM) *.dep
	$(ECHO) "### Deleted all derived files."


