#
# Copyright (C) 2009-2012 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#
include $(TOPDIR)/rules.mk

PKG_NAME:=gmp
#PKG_VERSION:=5.0.5
PKG_VERSION:=6.1.0

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.xz
#PKG_SOURCE_URL:=@GNU/gmp/
#PKG_MD5SUM:=8aef50959acec2a1ad41d144ffe0f3b5
PKG_MD5SUM:=a9868ef2556ad6a2909babcd1428f3c7
PKG_SOURCE_URL:=@ZyXEL_SITE/opensource/tools

HOST_BUILD_PARALLEL:=1

include $(INCLUDE_DIR)/host-build.mk

unexport CFLAGS

HOST_CONFIGURE_ARGS += \
	--enable-static \
	--disable-shared \
	--enable-cxx \
	--enable-mpbsd

ifeq ($(GNU_HOST_NAME),x86_64-linux-gnux32)
HOST_CONFIGURE_ARGS += ABI=x32
endif

$(eval $(call HostBuild))
