# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
PRJ_ROOT_DIR := C:/Users/Michael/Dropbox/FRC/2011/Workspace/DriveOnly
WS_ROOT_DIR := C:/Users/Michael/Dropbox/FRC/2011/Workspace



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h/WPIlib 

IDE_LIBRARIES = C:/WindRiver/vxworks-6.3/target/lib/WPILib.a 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = DriveOnly/$(MODE_DIR)/DriveOnly.out \
	 DriveOnly_partialImage/$(MODE_DIR)/DriveOnly_partialImage.o


#Rules

# DriveOnly
ifeq ($(DEBUG_MODE),1)
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
DriveOnly/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
DriveOnly/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h/WPIlib 
DriveOnly/$(MODE_DIR)/% : IDE_LIBRARIES = C:/WindRiver/vxworks-6.3/target/lib/WPILib.a 
DriveOnly/$(MODE_DIR)/% : PROJECT_TYPE = DKM
DriveOnly/$(MODE_DIR)/% : DEFINES = 
DriveOnly/$(MODE_DIR)/% : EXPAND_DBG = 0
DriveOnly/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
DriveOnly/$(MODE_DIR)/% : CPU = PPC603
DriveOnly/$(MODE_DIR)/% : TOOL_FAMILY = gnu
DriveOnly/$(MODE_DIR)/% : TOOL = gnu
DriveOnly/$(MODE_DIR)/% : TOOL_PATH = 
DriveOnly/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
DriveOnly/$(MODE_DIR)/% : LIBPATH = 
DriveOnly/$(MODE_DIR)/% : LIBS = 
DriveOnly/$(MODE_DIR)/% : OBJ_DIR := DriveOnly/$(MODE_DIR)

OBJECTS_DriveOnly = DriveOnly_partialImage/$(MODE_DIR)/DriveOnly_partialImage.o

DriveOnly/$(MODE_DIR)/DriveOnly.out : $(OBJECTS_DriveOnly)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_DriveOnly) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_DriveOnly) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

DriveOnly/$(MODE_DIR)/DriveOnly_compile_file : $(FILE) ;

_clean :: DriveOnly/$(MODE_DIR)/DriveOnly_clean

DriveOnly/$(MODE_DIR)/DriveOnly_clean : 
	$(TRACE_FLAG)if [ -d "DriveOnly" ]; then cd "DriveOnly"; rm -rf $(MODE_DIR); fi


# DriveOnly_partialImage
ifeq ($(DEBUG_MODE),1)
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
DriveOnly_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
DriveOnly_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h/WPIlib 
DriveOnly_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = C:/WindRiver/vxworks-6.3/target/lib/WPILib.a 
DriveOnly_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
DriveOnly_partialImage/$(MODE_DIR)/% : DEFINES = 
DriveOnly_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
DriveOnly_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
DriveOnly_partialImage/$(MODE_DIR)/% : CPU = PPC603
DriveOnly_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
DriveOnly_partialImage/$(MODE_DIR)/% : TOOL = gnu
DriveOnly_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
DriveOnly_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
DriveOnly_partialImage/$(MODE_DIR)/% : LIBPATH = 
DriveOnly_partialImage/$(MODE_DIR)/% : LIBS = 
DriveOnly_partialImage/$(MODE_DIR)/% : OBJ_DIR := DriveOnly_partialImage/$(MODE_DIR)

DriveOnly_partialImage/$(MODE_DIR)/Objects/DriveOnly/DashboardDataSender.o : C:/Users/Michael/Dropbox/FRC/2011/Workspace/DriveOnly/DashboardDataSender.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


DriveOnly_partialImage/$(MODE_DIR)/Objects/DriveOnly/DriveOnly.o : C:/Users/Michael/Dropbox/FRC/2011/Workspace/DriveOnly/DriveOnly.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


DriveOnly_partialImage/$(MODE_DIR)/Objects/DriveOnly/Elevator.o : C:/Users/Michael/Dropbox/FRC/2011/Workspace/DriveOnly/Elevator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_DriveOnly_partialImage = DriveOnly_partialImage/$(MODE_DIR)/Objects/DriveOnly/DashboardDataSender.o \
	 DriveOnly_partialImage/$(MODE_DIR)/Objects/DriveOnly/DriveOnly.o \
	 DriveOnly_partialImage/$(MODE_DIR)/Objects/DriveOnly/Elevator.o

DriveOnly_partialImage/$(MODE_DIR)/DriveOnly_partialImage.o : $(OBJECTS_DriveOnly_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_DriveOnly_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

DriveOnly_partialImage/$(MODE_DIR)/DriveOnly_partialImage_compile_file : $(FILE) ;

_clean :: DriveOnly_partialImage/$(MODE_DIR)/DriveOnly_partialImage_clean

DriveOnly_partialImage/$(MODE_DIR)/DriveOnly_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "DriveOnly_partialImage" ]; then cd "DriveOnly_partialImage"; rm -rf $(MODE_DIR); fi

DEP_FILES := DriveOnly_partialImage/$(MODE_DIR)/Objects/DriveOnly/DashboardDataSender.d DriveOnly_partialImage/$(MODE_DIR)/Objects/DriveOnly/DriveOnly.d DriveOnly_partialImage/$(MODE_DIR)/Objects/DriveOnly/Elevator.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
