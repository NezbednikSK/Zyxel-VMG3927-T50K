#
# Copyright (C) 2006-2012 OpenWrt.org
#    GPLv2 license, read COPYING
#

include $(TOPDIR)/rules.mk

PKG_NAME:=pcp-master
PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME).tar.bz2
#PKG_SOURCE_URL:=$(TOPDIR)/dl
PKG_SOURCE_URL:=@ZyXEL_SITE/opensource/network/services
PKG_MD5SUM:=875c181c8e54093a176e134d20da87d8
DL_DIR:=$(TOPDIR)/dl




PKG_LICENSE:=GPLv2
PKG_LICENSE_FILES:=COPYING

PATCH_DIR=patches_$(PKG_VERSION)
PKG_FIXUP:=autoreconf
include $(INCLUDE_DIR)/package.mk

ifneq ($(strip $(ZCFG_PLATFORM)),)
PCP_CFLAGS += -D$(ZCFG_PLATFORM)_PLATFORM
endif

LIB_ZCFG = +libjson +ZYXEL_SUPPORT_ZCFG:libzyutil  +ZYXEL_SUPPORT_ZCFG:libzcfg_msg +ZYXEL_SUPPORT_ZCFG:libzcfg_fe_rdm_access +ZYXEL_SUPPORT_ZCFG:libzcfg_fe_rdm_string +ZYXEL_SUPPORT_ZCFG:libzcfg_fe_schema +ZYXEL_SUPPORT_ZCFG:libzcfg_fe_rdm_struct
PCP_LIBS = -ljson -lzcfg_msg -lzyutil -lzcfg_fe_schema  -lzcfg_fe_rdm_access -lzcfg_fe_rdm_string -lzcfg_fe_rdm_struct
CPPFLAGS = -I/home/raghu/dev_OSK/staging_dir/target-mips_r2_uClibc-0.9.33.2/usr/include -I/home/raghu/dev_OSK/staging_dir/target-mips_r2_uClibc-0.9.33.2/include -I/home/raghu/dev_OSK/staging_dir/toolchain-mips_r2_gcc-4.6.3_uClibc-0.9.33.2/usr/include -I/home/raghu/dev_OSK/staging_dir/toolchain-mips_r2_gcc-4.6.3_uClibc-0.9.33.2/include
CFLAGS = -Os -pipe -mips32r2 -fhonour-copts -Wno-error=unused-but-set-variable -msoft-float

define Package/pcp-master
  SECTION:=net
  CATEGORY:=Base system
  TITLE:=pcp-master is a PCP client library
  URL:=https://github.com/libpcp/pcp
  DEPENDS:=$(LIB_ZCFG)
endef


define Build/Configure
		$(call Build/Configure/Default, \
				  LIBS="$(PCP_LIBS)" CPPFLAGS="$(CPPFLAGS)" CFLAGS="$(CFLAGS)")
endef

define Package/pcp-master/install
	$(INSTALL_DIR) $(1)/usr/sbin
	$(CP) $(PKG_BUILD_DIR)/pcp_app/pcp $(1)/usr/sbin/
endef

$(eval $(call BuildPackage,pcp-master))
