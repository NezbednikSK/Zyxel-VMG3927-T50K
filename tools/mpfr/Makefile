#
# Copyright (C) 2009 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#
include $(TOPDIR)/rules.mk

PKG_NAME:=mpfr
#PKG_VERSION:=3.0.0
PKG_VERSION:=3.1.4

#PKG_SOURCE_URL:=http://www.mpfr.org/mpfr-$(PKG_VERSION)
PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.bz2
#PKG_MD5SUM:=f45bac3584922c8004a10060ab1a8f9f
PKG_MD5SUM:=b8a2f6b0e68bef46e53da2ac439e1cf4
PKG_SOURCE_URL:=@ZyXEL_SITE/opensource/tools

HOST_BUILD_PARALLEL:=1
HOST_FIXUP:=autoreconf

include $(INCLUDE_DIR)/host-build.mk

HOST_CONFIGURE_ARGS += \
	--enable-static \
	--disable-shared \
	--with-gmp=$(STAGING_DIR_HOST)

$(eval $(call HostBuild))
