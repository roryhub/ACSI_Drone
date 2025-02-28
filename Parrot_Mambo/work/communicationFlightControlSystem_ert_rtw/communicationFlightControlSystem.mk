###########################################################################
## Makefile generated for Simulink model 'communicationFlightControlSystem'. 
## 
## Makefile     : communicationFlightControlSystem.mk
## Generated on : Wed May 01 16:12:57 2019
## MATLAB Coder version: 4.2 (R2019a)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/communicationFlightControlSystem.so
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

PRODUCT_NAME              = communicationFlightControlSystem
MAKEFILE                  = communicationFlightControlSystem.mk
COMPUTER                  = GLNXA64
MATLAB_ROOT               = /usr/local/MATLAB/R2019a
MATLAB_BIN                = /usr/local/MATLAB/R2019a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/glnxa64
MASTER_ANCHOR_DIR         = 
START_DIR                 = /home/cerlabcontrol/Documents/MATLAB/ParrotControlGit/work
ARCH                      = glnxa64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Sourcery G++ Lite GNU Toolchain for Drones
# Supported Version(s):    
# ToolchainInfo Version:   R2019a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# PARROT_GCCCOMPILER_DIR
# PARROT_GCCCOMPILER_BIN_DIR
# PARROT_GCCCOMPILER_LIB_DIR
# PARROT_GCCSourceryLite


TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Sourcery G++ Lite GNU Toolchain for Drones C Compiler
CC_PATH = $(PARROT_GCCSourceryLite)
CC = "$(CC_PATH)/arm-none-linux-gnueabi-gcc"

# Linker: Sourcery G++ Lite GNU Toolchain for Drones Linker
LD_PATH = $(PARROT_GCCSourceryLite)
LD = "$(LD_PATH)/arm-none-linux-gnueabi-gcc"

# C++ Compiler: Sourcery G++ Lite GNU Toolchain for Drones C Compiler
CPP_PATH = $(PARROT_GCCSourceryLite)
CPP = "$(CPP_PATH)/arm-none-linux-gnueabi-g++"

# C++ Linker: Sourcery G++ Lite GNU Toolchain for Drones C++ Linker
CPP_LD_PATH = $(PARROT_GCCSourceryLite)
CPP_LD = "$(CPP_LD_PATH)/arm-none-linux-gnueabi-gcc"

# Archiver: Sourcery G++ Lite GNU Toolchain for Drones Archiver
AR_PATH = $(PARROT_GCCSourceryLite)
AR = "$(AR_PATH)/arm-none-linux-gnueabi-ar"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/glnxa64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

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
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = -r
CFLAGS               = -c \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@" -O3 \
                       -DDELOS \
                       -DDELOS_EDU \
                       -fPIC \
                       -Wall
CPPFLAGS             =
CPP_LDFLAGS          =
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -shared
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    =



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/communicationFlightControlSystem.so
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR)/slprj/ert/stateEstimator -I$(START_DIR)/slprj/ert/flightController -I$(START_DIR)/slprj/ert/conversionYUV -I$(START_DIR) -I/home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/shared_linuxservices/include -I$(START_DIR)/communicationFlightControlSystem_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/vision/include -I$(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include -I$(START_DIR)/slprj/ert/_sharedutils -I/home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DMODEL=communicationFlightControlSystem -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DUNIX -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -DDELOS -DDELOS_EDU -DEXTMODE_DISABLETESTING -DEXTMODE_STATIC_SIZE=16384 -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DPARROT_LINUX_COMM -DSTACK_SIZE=64 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DRT -DMATFILE_LOGGING=1 -DMW_HAS_IMAGE_PROCESSING -DSTOP_TIME=30 -DMAMBO=1
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1
DEFINES_CUSTOM = 
DEFINES_IMPLIED = -DTID01EQ=0
DEFINES_SKIPFORSIL = -DDELOS -DDELOS_EDU -DEXTMODE_DISABLETESTING -DEXTMODE_STATIC_SIZE=16384 -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DPARROT_LINUX_COMM -DSTACK_SIZE=64 -DRT -DMATFILE_LOGGING=1 -DSTOP_TIME=30 -DMAMBO=1
DEFINES_STANDARD = -DMODEL=communicationFlightControlSystem -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DUNIX

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_IMPLIED) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/shared_linuxservices/src/TCPSendReceive/MW_TCPSendReceive.c $(MATLAB_ROOT)/rtw/c/src/rt_logging.c $(START_DIR)/communicationFlightControlSystem_ert_rtw/communicationFlightControlSystem.c $(START_DIR)/communicationFlightControlSystem_ert_rtw/communicationFlightControlSystem_data.c /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/rsedu_control.c /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/rsedu_of.c /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/rsedu_vis.c /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/ptimer.c /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/controlCommand.c /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/mw_extrathreads.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = MW_TCPSendReceive.o rt_logging.o communicationFlightControlSystem.o communicationFlightControlSystem_data.o rsedu_control.o rsedu_of.o rsedu_vis.o ptimer.o controlCommand.o mw_extrathreads.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

MODELREF_LIBS = ../slprj/ert/conversionYUV/conversionYUV_rtwlib.a ../slprj/ert/flightController/flightController_rtwlib.a ../slprj/ert/stateEstimator/stateEstimator_rtwlib.a

LIBS = $(START_DIR)/slprj/ert/_sharedutils/rtwshared.a

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

CFLAGS_SKIPFORSIL =  
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL =  
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL =  

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL =  

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL =  

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL =  

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


DERIVED_SRCS = $(subst .o,.dep,$(OBJS))

build:

%.dep:



-include codertarget_assembly_flags.mk
-include ../codertarget_assembly_flags.mk
-include *.dep


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(MODELREF_LIBS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : build


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

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MODELREF_LIBS) $(LIBS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) $(OBJS) ../slprj/ert/conversionYUV/conversionYUV_rtwlib.a ../slprj/ert/flightController/flightController_rtwlib.a ../slprj/ert/stateEstimator/stateEstimator_rtwlib.a $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/communicationFlightControlSystem_ert_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/communicationFlightControlSystem_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/shared_linuxservices/src/TCPSendReceive/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/shared_linuxservices/src/TCPSendReceive/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rsedu_control.o : /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/rsedu_control.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rsedu_of.o : /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/rsedu_of.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rsedu_vis.o : /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/rsedu_vis.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ptimer.o : /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/ptimer.c
	$(CC) $(CFLAGS) -o "$@" "$<"


controlCommand.o : /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/controlCommand.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mw_extrathreads.o : /home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/src/mw_extrathreads.c
	$(CC) $(CFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


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
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(RM) *.dep
	$(ECHO) "### Deleted all derived files."


