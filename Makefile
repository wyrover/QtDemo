#############################################################################
# Makefile for building: QtDemo
# Generated by qmake (2.01a) (Qt 4.8.2) on: ?? ?? 26 15:02:01 2013
# Project:  QtDemo.pro
# Template: app
# Command: c:\Qt\4.8.2\bin\qmake.exe -o Makefile QtDemo.pro
#############################################################################

first: debug
install: debug-install
uninstall: debug-uninstall
MAKEFILE      = Makefile
QMAKE         = c:\Qt\4.8.2\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
SUBTARGETS    =  \
		debug \
		release

debug: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: QtDemo.pro  ..\..\..\..\Qt\4.8.2\mkspecs\default\qmake.conf ..\..\..\..\Qt\4.8.2\mkspecs\qconfig.pri \
		..\..\..\..\Qt\4.8.2\mkspecs\modules\qt_webkit_version.pri \
		..\..\..\..\Qt\4.8.2\mkspecs\features\qt_functions.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\qt_config.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\win32-msvc2010\qmake.conf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\exclusive_builds.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\default_pre.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\win32\default_pre.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\debug.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\debug_and_release.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\default_post.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\win32\default_post.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\win32\rtti.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\win32\exceptions.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\win32\stl.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\shared.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\win32\embed_manifest_exe.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\win32\embed_manifest_dll.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\warn_on.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\qt.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\win32\thread.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\moc.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\win32\windows.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\resources.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\uic.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\yacc.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\lex.prf \
		..\..\..\..\Qt\4.8.2\mkspecs\features\include_source_dir.prf \
		c:\Qt\4.8.2\lib\qtmaind.prl
	$(QMAKE) -o Makefile QtDemo.pro
..\..\..\..\Qt\4.8.2\mkspecs\qconfig.pri:
..\..\..\..\Qt\4.8.2\mkspecs\modules\qt_webkit_version.pri:
..\..\..\..\Qt\4.8.2\mkspecs\features\qt_functions.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\qt_config.prf:
..\..\..\..\Qt\4.8.2\mkspecs\win32-msvc2010\qmake.conf:
..\..\..\..\Qt\4.8.2\mkspecs\features\exclusive_builds.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\default_pre.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\win32\default_pre.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\debug.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\debug_and_release.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\default_post.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\win32\default_post.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\win32\rtti.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\win32\exceptions.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\win32\stl.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\shared.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\win32\embed_manifest_exe.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\win32\embed_manifest_dll.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\warn_on.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\qt.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\win32\thread.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\moc.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\win32\windows.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\resources.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\uic.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\yacc.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\lex.prf:
..\..\..\..\Qt\4.8.2\mkspecs\features\include_source_dir.prf:
c:\Qt\4.8.2\lib\qtmaind.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -o Makefile QtDemo.pro

qmake_all: FORCE

make_default: debug-make_default release-make_default FORCE
make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
	-$(DEL_FILE) ".\QtDemo.intermediate.manifest"
	-$(DEL_FILE) QtDemo.exp
	-$(DEL_FILE) QtDemo.ilk
	-$(DEL_FILE) vc*.pdb
	-$(DEL_FILE) vc*.idb
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) QtDemo.pdb

check: first

debug-mocclean: $(MAKEFILE).Debug
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean: $(MAKEFILE).Release
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables: $(MAKEFILE).Debug
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables: $(MAKEFILE).Release
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
