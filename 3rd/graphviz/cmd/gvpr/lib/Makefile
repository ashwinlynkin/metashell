# Makefile.in generated by automake 1.13.4 from Makefile.am.
# cmd/gvpr/lib/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2013 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



# $Id$ $Revision$


am__is_gnu_make = test -n '$(MAKEFILE_LIST)' && test -n '$(MAKELEVEL)'
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/graphviz
pkgincludedir = $(includedir)/graphviz
pkglibdir = $(libdir)/graphviz
pkglibexecdir = $(libexecdir)/graphviz
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-unknown-linux-gnu
host_triplet = x86_64-unknown-linux-gnu
subdir = cmd/gvpr/lib
DIST_COMMON = $(srcdir)/Makefile.in $(srcdir)/Makefile.am
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/argz.m4 \
	$(top_srcdir)/m4/libtool.m4 $(top_srcdir)/m4/ltdl.m4 \
	$(top_srcdir)/m4/ltoptions.m4 $(top_srcdir)/m4/ltsugar.m4 \
	$(top_srcdir)/m4/ltversion.m4 $(top_srcdir)/m4/lt~obsolete.m4 \
	$(top_srcdir)/./version.m4 $(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
SOURCES =
DIST_SOURCES =
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(gvprdir)"
DATA = $(gvpr_DATA)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/gviz/tmp/gviz/graphviz-master/config/missing aclocal-1.13
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
ANN_CFLAGS =  
ANN_LIBS = -lANN  
AR = ar
ARGZ_H = 
AUTOCONF = ${SHELL} /home/gviz/tmp/gviz/graphviz-master/config/missing autoconf
AUTOHEADER = ${SHELL} /home/gviz/tmp/gviz/graphviz-master/config/missing autoheader
AUTOMAKE = ${SHELL} /home/gviz/tmp/gviz/graphviz-master/config/missing automake-1.13
AWK = gawk
CC = gcc -std=gnu99
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2 -Wall -Wextra -Wmissing-include-dirs -Wswitch-default -Wfloat-equal -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wcast-qual -Wconversion -Wstrict-prototypes -Wmissing-prototypes -Wnested-externs -Wno-unknown-pragmas -Wstrict-prototypes -Wpointer-arith -Wall -ffast-math
CPP = gcc -E
CPPFLAGS =  -I/usr/local/include
CXX = g++
CXXCPP = g++ -E
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -g -O2
CYGPATH_W = echo
CYGWIN = no
DARWIN = 
DARWIN9 = no
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DEVIL_INCLUDES = 
DEVIL_LIBS = 
DLLTOOL = false
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /usr/bin/grep -E
EXEEXT = 
EXPAT_CONFIG = 
EXPAT_INCLUDES = 
EXPAT_LIBS = -L/usr/lib64 -lexpat
EXTRA_SMYRNA_LDFLAGS = 
FGREP = /usr/bin/grep -F
FONTCONFIG_CFLAGS = -I/usr/include/freetype2  
FONTCONFIG_CONFIG = 
FONTCONFIG_LIBS = -lfontconfig -lfreetype  
FREETYPE2_CFLAGS = -I/usr/include/freetype2  
FREETYPE2_LIBS = -lfreetype  
FREETYPE_CONFIG = 
GDIPLUS_CFLAGS = 
GDIPLUS_HEADS = 
GDIPLUS_LIBS = 
GDK_CFLAGS = -pthread -I/usr/include/gtk-2.0 -I/usr/lib64/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng15 -I/usr/include/libdrm  
GDK_LIBS = -lgdk-x11-2.0 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lpango-1.0 -lcairo -lgobject-2.0 -lglib-2.0  
GDK_PIXBUF_CFLAGS = -pthread -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng15 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include  
GDK_PIXBUF_LIBS = -lgdk_pixbuf-2.0 -lgobject-2.0 -lglib-2.0  
GDLIB_CFLAGS = 
GDLIB_CONFIG = 
GDLIB_LIBS =  -lgd 
GLADE_CFLAGS = -pthread -I/usr/include/libglade-2.0 -I/usr/include/gtk-2.0 -I/usr/include/libxml2 -I/usr/lib64/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng15 -I/usr/include/libdrm -I/usr/include/harfbuzz  
GLADE_LIBS = -lglade-2.0 -lgtk-x11-2.0 -lxml2 -lgdk-x11-2.0 -latk-1.0 -lgio-2.0 -lpangoft2-1.0 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lcairo -lpango-1.0 -lfontconfig -lgobject-2.0 -lglib-2.0 -lfreetype  
GLITZ_CFLAGS = 
GLITZ_LIBS = 
GLUT_CFLAGS = 
GLUT_LIBS =  -lglut
GO = 
GO_INCLUDES = 
GO_LIBS = 
GRAPHVIZ_COLLECTION = development
GRAPHVIZ_SOURCES = graphviz/development/SOURCES
GRAPHVIZ_VERSION_BUILD = 0
GRAPHVIZ_VERSION_COMMIT = 67cd2e5
GRAPHVIZ_VERSION_DATE = 20161225.0304
GRAPHVIZ_VERSION_MAJOR = 2
GRAPHVIZ_VERSION_MICRO = 1
GRAPHVIZ_VERSION_MINOR = 40
GRAPHVIZ_VERSION_REVISION = 0
GREP = /usr/bin/grep
GROFF = groff
GS_CFLAGS = 
GS_LIBS = -lgs
GTKGLEXT_CFLAGS = -pthread -I/usr/include/gtkglext-1.0 -I/usr/lib64/gtkglext-1.0/include -I/usr/include/gtk-2.0 -I/usr/lib64/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng15 -I/usr/include/libdrm -I/usr/include/atk-1.0 -I/usr/include/harfbuzz  
GTKGLEXT_LIBS = -Wl,--export-dynamic -pthread -lgtkglext-x11-1.0 -lgdkglext-x11-1.0 -lGLU -lGL -lXmu -lXt -lSM -lICE -lgtk-x11-2.0 -lpangox-1.0 -lX11 -lgmodule-2.0 -lgdk-x11-2.0 -latk-1.0 -lgio-2.0 -lpangoft2-1.0 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lcairo -lpango-1.0 -lfontconfig -lgobject-2.0 -lglib-2.0 -lfreetype  
GTKGL_CFLAGS = -pthread -I/usr/include/gtkgl-2.0 -I/usr/include/gtk-2.0 -I/usr/lib64/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng15 -I/usr/include/libdrm -I/usr/include/harfbuzz  
GTKGL_LIBS = -lgtkgl-2.0 -lGLU -lGL -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lgio-2.0 -lpangoft2-1.0 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lcairo -lpango-1.0 -lfontconfig -lgobject-2.0 -lglib-2.0 -lfreetype  
GTK_CFLAGS = -pthread -I/usr/include/gtk-2.0 -I/usr/lib64/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng15 -I/usr/include/libdrm -I/usr/include/harfbuzz  
GTK_LIBS = -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lgio-2.0 -lpangoft2-1.0 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lcairo -lpango-1.0 -lfontconfig -lgobject-2.0 -lglib-2.0 -lfreetype  
GTS_CFLAGS = -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include  
GTS_LIBS = -lgts -lm -lglib-2.0  
GUILE = guile2
GUILE_CFLAGS = -pthread -I/usr/include/guile/2.0  
GUILE_INCLUDES = -pthread -I/usr/include/guile/2.0  
GUILE_LIBS = -lguile-2.0 -lgc  
GVPLUGIN_CONFIG_FILE = config6
GVPLUGIN_VERSION = 6
GVPLUGIN_VERSION_INFO = 6:0:0
INCLTDL = 
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
INTGOSIZE = 64
IO = 
IO_INCLUDES = 
IO_LIBS = 
IPSEPCOLA_INCLUDES = 
IPSEPCOLA_LIBS = 
JAVA = java
JAVA_INCLUDES =  -I/usr/lib/jvm/java/include -I/usr/lib/jvm/java/include/linux
JAVA_LIBS = 
JNI_EXTRA_LDFLAGS = -shrext .so
JSHEXT = so
LASI_CFLAGS = -pthread -I/usr/include/pango-1.0 -I/usr/include/freetype2 -I/usr/include/harfbuzz -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include  
LASI_LIBS = -lLASi -lpangoft2-1.0 -lpango-1.0 -lfontconfig -lfreetype -lgobject-2.0 -lglib-2.0  
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS =  -L/usr/local/lib
LEX = flex
LEXLIB = 
LEX_OUTPUT_ROOT = lex.yy
LIBADD_DL = -ldl 
LIBADD_DLD_LINK = 
LIBADD_DLOPEN = -ldl
LIBADD_SHL_LOAD = 
LIBGEN_LIBS = 
LIBLTDL = -lltdl
LIBLTDL_LDFLAGS = 
LIBOBJS = 
LIBPOSTFIX = 64
LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = 
LN_S = ln -s
LTDLDEPS = 
LTDLINCL = 
LTDLOPEN = libltdl
LTLIBOBJS = 
LT_CONFIG_H = config.h
LT_DLLOADERS =  libltdl/dlopen.la
LT_DLPREOPEN = -dlpreopen libltdl/dlopen.la 
LUA = lua
LUACONFIG = 
LUA_INCLUDES =   
LUA_INSTALL_DIR = /usr/lib64/lua/5.1
LUA_LIBS =  -llua -lm -ldl  
MAKEINFO = ${SHELL} /home/gviz/tmp/gviz/graphviz-master/config/missing makeinfo
MANIFEST_TOOL = :
MATH_LIBS = -lm
MCS = mcs
MINGW32 = no
MING_CFLAGS = 
MING_LIBS = 
MKDIR_P = /usr/bin/mkdir -p
NM = /usr/bin/nm -B
NMEDIT = 
OBJC = gcc
OBJCDEPMODE = depmode=gcc3
OBJCFLAGS = 
OBJDUMP = objdump
OBJEXT = o
OCAML = ocaml
OCAML_INCLUDES = -I/usr/lib64/ocaml
OCAML_LIBS = -L/usr/lib64/ocaml
OCAML_OPT = ocamlopt
OTOOL = 
OTOOL64 = 
PACKAGE = graphviz
PACKAGE_BUGREPORT = http://www.graphviz.org/
PACKAGE_NAME = graphviz
PACKAGE_STRING = graphviz 2.40.1
PACKAGE_TARNAME = graphviz
PACKAGE_URL = 
PACKAGE_VERSION = 2.40.1
PANGOCAIRO_CFLAGS = -pthread -I/usr/include/pango-1.0 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng15 -I/usr/include/libdrm  
PANGOCAIRO_LIBS = -lpangocairo-1.0 -lpango-1.0 -lcairo -lgobject-2.0 -lglib-2.0  
PANGOFT2_CFLAGS = -pthread -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/freetype2 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include  
PANGOFT2_LIBS = -lpangoft2-1.0 -lpango-1.0 -lfontconfig -lgobject-2.0 -lglib-2.0 -lfreetype  
PATH_SEPARATOR = :
PERL = perl
PERL_INCLUDES = -I/usr/lib64/perl5/CORE
PERL_INSTALL_DIR = /usr/lib64/perl5/vendor_perl
PERL_LIBS = -L/usr/lib64/perl5/CORE -lperl
PHP = php
PHP_INCLUDES = -I/usr/include/php -I/usr/include/php/main -I/usr/include/php/TSRM -I/usr/include/php/Zend -I/usr/include/php/ext -I/usr/include/php/ext/date/lib
PHP_INSTALL_DATADIR = /usr/share/php
PHP_INSTALL_DIR = /usr/lib64/php/modules
PHP_LIBS = 
PKGCONFIG = pkg-config
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = /usr/local/lib/pkgconfig:
PLATFORMSDKINCLUDE = 
PLATFORMSDKINCLUDE_ESCAPED = 
PLATFORMSDKLIB = 
POPPLER_CFLAGS = -pthread -I/usr/include/poppler/glib -I/usr/include/poppler -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng15 -I/usr/include/libdrm  
POPPLER_LIBS = -lpoppler-glib -lgio-2.0 -lcairo -lgobject-2.0 -lglib-2.0  
PS2PDF = ps2pdf
PYTHON = python
PYTHON23 = 
PYTHON23_INCLUDES = 
PYTHON23_INSTALL_DIR = 
PYTHON23_LIBS = 
PYTHON24 = 
PYTHON24_INCLUDES = 
PYTHON24_INSTALL_DIR = 
PYTHON24_LIBS = 
PYTHON25 = 
PYTHON25_INCLUDES = 
PYTHON25_INSTALL_DIR = 
PYTHON25_LIBS = 
PYTHON26 = 
PYTHON26_INCLUDES = 
PYTHON26_INSTALL_DIR = 
PYTHON26_LIBS = 
PYTHON27 = 
PYTHON27_INCLUDES = 
PYTHON27_INSTALL_DIR = 
PYTHON27_LIBS = 
PYTHON34 = 
PYTHON34_INCLUDES = 
PYTHON34_INSTALL_DIR = 
PYTHON34_LIBS = 
PYTHON_INCLUDES = -I/usr/include/python2.7
PYTHON_INSTALL_DIR = /usr/lib64/python2.7/site-packages
PYTHON_LIBS = -undefined dynamic_lookup
QMAKE = qmake-qt4
QTCORE_CFLAGS = -DQT_SHARED -I/usr/include/QtCore  
QTCORE_LIBS = -lQtCore  
QTGUI_CFLAGS = -DQT_SHARED -I/usr/include/QtGui -I/usr/include/QtCore  
QTGUI_LIBS = -lQtGui -lQtCore  
QUARTZ_CFLAGS = 
QUARTZ_LIBS = 
RANLIB = ranlib
RC = false
RSVG_CFLAGS = -pthread -I/usr/include/librsvg-2.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/cairo -I/usr/include/libpng15 -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libdrm  
RSVG_LIBS = -lrsvg-2 -lm -lgio-2.0 -lgdk_pixbuf-2.0 -lcairo -lgobject-2.0 -lglib-2.0  
RUBY = ruby
RUBY_CFLAGS = -I/usr/include/x86_64-linux  
RUBY_INSTALL_DIR = /usr/lib64/ruby/vendor_ruby
RUBY_LIBS = -lruby -lpthread -lrt -ldl -lcrypt -lm  
R_CFLAGS = -I/usr/include/R  
R_LIBS = -Wl,--export-dynamic -fopenmp -Wl,-z,relro -L/usr/lib64/R/lib -lR  
SED = /usr/bin/sed
SET_MAKE = 
SHARP_INCLUDES = 
SHARP_LIBS = 
SHELL = /bin/sh
SIZEOF_INT_BITS = 32
SOCKET_LIBS = 
SORT = sort
STRIP = strip
SVG_2_36_CFLAGS = -pthread -I/usr/include/librsvg-2.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/cairo -I/usr/include/libpng15 -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libdrm  
SVG_2_36_LIBS = -lrsvg-2 -lm -lgio-2.0 -lgdk_pixbuf-2.0 -lgobject-2.0 -lglib-2.0 -lcairo  
SWIG = swig
SWIGJAVA_CPPFLAGS = 
SWIG_PHP_OPT = -php5
TCLINT_INCLUDES = -I/usr/include/tcl-private/generic
TCLSH = /usr/bin/tclsh8.5
TCL_CFLAGS =  -DUSE_TCL_STUBS
TCL_DEFS = -DPACKAGE_NAME=\"tcl\" -DPACKAGE_TARNAME=\"tcl\" -DPACKAGE_VERSION=\"8.5\" -DPACKAGE_STRING=\"tcl\ 8.5\" -DPACKAGE_BUGREPORT=\"\" -DPACKAGE_URL=\"\" -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_LIMITS_H=1 -DHAVE_SYS_PARAM_H=1 -DUSE_THREAD_ALLOC=1 -D_REENTRANT=1 -D_THREAD_SAFE=1 -DHAVE_PTHREAD_ATTR_SETSTACKSIZE=1 -DHAVE_PTHREAD_GETATTR_NP=1 -DGETATTRNP_NOT_DECLARED=1 -DTCL_THREADS=1 -DTCL_CFGVAL_ENCODING=\"iso8859-1\" -DMODULE_SCOPE=extern\ __attribute__\(\(__visibility__\(\"hidden\"\)\)\) -DHAVE_CAST_TO_UNION=1 -DTCL_SHLIB_EXT=\".so\" -DTCL_TOMMATH=1 -DMP_PREC=4 -D_LARGEFILE64_SOURCE=1 -DTCL_WIDE_INT_IS_LONG=1 -DHAVE_GETCWD=1 -DHAVE_OPENDIR=1 -DHAVE_STRTOL=1 -DHAVE_WAITPID=1 -DHAVE_GETADDRINFO=1 -DHAVE_GETPWUID_R_5=1 -DHAVE_GETPWUID_R=1 -DHAVE_GETPWNAM_R_5=1 -DHAVE_GETPWNAM_R=1 -DHAVE_GETGRGID_R_5=1 -DHAVE_GETGRGID_R=1 -DHAVE_GETGRNAM_R_5=1 -DHAVE_GETGRNAM_R=1 -DHAVE_GETHOSTBYNAME_R_6=1 -DHAVE_GETHOSTBYNAME_R=1 -DHAVE_GETHOSTBYADDR_R_8=1 -DHAVE_GETHOSTBYADDR_R=1 -DUSE_TERMIOS=1 -DHAVE_SYS_TIME_H=1 -DTIME_WITH_SYS_TIME=1 -DHAVE_GMTIME_R=1 -DHAVE_LOCALTIME_R=1 -DHAVE_MKTIME=1 -DHAVE_TM_GMTOFF=1 -DHAVE_TIMEZONE_VAR=1 -DHAVE_STRUCT_STAT_ST_BLOCKS=1 -DHAVE_STRUCT_STAT_ST_BLKSIZE=1 -DHAVE_BLKCNT_T=1 -DHAVE_INTPTR_T=1 -DHAVE_UINTPTR_T=1 -DHAVE_SIGNED_CHAR=1 -DHAVE_LANGINFO=1 -DHAVE_PTHREAD_ATFORK=1 -DHAVE_FTS=1 -DHAVE_SYS_IOCTL_H=1 -DTCL_UNLOAD_DLLS=1 -DUSE_DTRACE=1 -DHAVE_CPUID=1
TCL_EXEC_PREFIX = /usr
TCL_INCLUDES = 
TCL_INSTALL_DIR = /usr/lib64/tcl8.5
TCL_LIBS = 
TCL_MAJOR_VERSION = 8
TCL_MINOR_VERSION = 5
TCL_PATCH_LEVEL = .13
TCL_PKGINDEX = tcldot/pkgIndex.tcl tclpathplan/pkgIndex.tcl
TCL_PKGINDEX_GD = gdtclft/pkgIndex.tcl
TCL_PKGINDEX_SWIG = gv/pkgIndex.tcl
TCL_SHLIB_SUFFIX = .so
TCL_SRC_DIR = /usr/include/tcl-private
TCL_STUB_LIB_SPEC = -L/usr/lib64 -ltclstub8.5
TCL_VERSION = 8.5
VERSION = 2.40.1
VISIO_CFLAGS = 
VISIO_LIBS = 
WEBP_CFLAGS = 
WEBP_LIBS = 
XAW_INCLUDES = 
XAW_LIBS =   -lXaw
XMKMF = 
XPM_INCLUDES = 
XPM_LIBS =  -lXpm
XRENDER_CFLAGS =  
XRENDER_LIBS = -lXrender -lX11  
X_CFLAGS = 
X_EXTRA_LIBS = 
X_LIBS = 
X_PRE_LIBS =  -lSM -lICE
YACC = bison -y
YFLAGS = 
Z_INCLUDES = 
Z_LIBS =  -lz
abs_builddir = /home/gviz/tmp/gviz/graphviz-master/cmd/gvpr/lib
abs_srcdir = /home/gviz/tmp/gviz/graphviz-master/cmd/gvpr/lib
abs_top_builddir = /home/gviz/tmp/gviz/graphviz-master
abs_top_srcdir = /home/gviz/tmp/gviz/graphviz-master
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_DUMPBIN = 
ac_ct_OBJC = gcc
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-unknown-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = unknown
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-unknown-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = unknown
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/gviz/tmp/gviz/graphviz-master/config/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
ltdl_LIBOBJS =  lt__strl.o
ltdl_LTLIBOBJS =  lt__strl.lo
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
subdirs =  libltdl
sys_symbol_underscore = no
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../../
top_builddir = ../../..
top_srcdir = ../../..
gvprdir = $(pkgdatadir)/gvpr
gvpr_DATA = addedges addranks addrings anon attr bb bbox bipart binduce chkclusters \
	chkedges cliptree col collapse color cycle dechain deghist \
	deledges delmulti delnodes depath dijkstra \
	flatten get-layers-list histogram group indent knbhd \
	maxdeg path rotate scale scalexy span topon \
	treetoclust 

EXTRA_DIST = $(gvpr_DATA)
all: all-am

.SUFFIXES:
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu cmd/gvpr/lib/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu cmd/gvpr/lib/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-gvprDATA: $(gvpr_DATA)
	@$(NORMAL_INSTALL)
	@list='$(gvpr_DATA)'; test -n "$(gvprdir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(gvprdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(gvprdir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(gvprdir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(gvprdir)" || exit $$?; \
	done

uninstall-gvprDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(gvpr_DATA)'; test -n "$(gvprdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(gvprdir)'; $(am__uninstall_files_from_dir)
tags TAGS:

ctags CTAGS:

cscope cscopelist:


distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(DATA)
installdirs:
	for dir in "$(DESTDIR)$(gvprdir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool mostlyclean-am

distclean: distclean-am
	-rm -f Makefile
distclean-am: clean-am distclean-generic

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-gvprDATA

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-generic mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-gvprDATA

.MAKE: install-am install-strip

.PHONY: all all-am check check-am clean clean-generic clean-libtool \
	cscopelist-am ctags-am distclean distclean-generic \
	distclean-libtool distdir dvi dvi-am html html-am info info-am \
	install install-am install-data install-data-am install-dvi \
	install-dvi-am install-exec install-exec-am install-gvprDATA \
	install-html install-html-am install-info install-info-am \
	install-man install-pdf install-pdf-am install-ps \
	install-ps-am install-strip installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-generic mostlyclean-libtool pdf pdf-am \
	ps ps-am tags-am uninstall uninstall-am uninstall-gvprDATA


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
