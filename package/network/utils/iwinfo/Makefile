#
# Copyright (C) 2010-2012 Jo-Philipp Wich <xm@subsignal.org>
#
# This is free software, licensed under the GPL 2 license.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=libiwinfo
ifeq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
PKG_VERSION:=2015-06-01
PKG_RELEASE=$(PKG_SOURCE_VERSION)

#PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=@ZyXEL_SITE/WIFI_Router
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)
PKG_SOURCE_VERSION:=ade8b1b299cbd5748db1acf80dd3e9f567938371
PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION)-$(PKG_SOURCE_VERSION).tar.gz
PKG_MAINTAINER:=Jo-Philipp Wich <jow@openwrt.org>
PKG_LICENSE:=GPL-2.0

PKG_CONFIG_DEPENDS := \
	CONFIG_PACKAGE_kmod-brcm-wl \
	CONFIG_PACKAGE_kmod-brcm-wl-mini \
	CONFIG_PACKAGE_kmod-brcm-wl-mimo \
	CONFIG_PACKAGE_kmod-madwifi \
	CONFIG_PACKAGE_kmod-cfg80211 \
	CONFIG_PACKAGE_kmod-qca-wifi-unified-profile \
	CONFIG_PACKAGE_kmod-qca-wifi-unified-perf

PKG_BUILD_DEPENDS := \
	PACKAGE_kmod-qca-wifi:kmod-qca-wifi \
	PACKAGE_kmod-qca-wifi-unified-profile:kmod-qca-wifi-unified-profile \
	PACKAGE_kmod-qca-wifi-unified-perf:kmod-qca-wifi-unified-perf
else
PKG_RELEASE:=36

PKG_BUILD_DIR := $(BUILD_DIR)/$(PKG_NAME)
PKG_CONFIG_DEPENDS := \
	CONFIG_PACKAGE_kmod-brcm-wl \
	CONFIG_PACKAGE_kmod-brcm-wl-mini \
	CONFIG_PACKAGE_kmod-brcm-wl-mimo \
	CONFIG_PACKAGE_kmod-madwifi \
	CONFIG_PACKAGE_kmod-mac80211

endif
include $(INCLUDE_DIR)/package.mk


define Package/libiwinfo
  SECTION:=libs
  CATEGORY:=Libraries
  TITLE:=Generalized Wireless Information Library (iwinfo)
ifeq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
  DEPENDS:=+PACKAGE_kmod-cfg80211:libnl-tiny +libuci
  ABI_VERSION:=$(PKG_RELEASE)
else
ifeq ($(CONFIG_PACKAGE_libnl),y)
  DEPENDS:=+PACKAGE_kmod-mac80211:libnl
else
  DEPENDS:=+PACKAGE_kmod-mac80211:libnl-tiny
endif
  MAINTAINER:=Jo-Philipp Wich <xm@subsignal.org>
endif
endef

define Package/libiwinfo/description
  Wireless information library with consistent interface for proprietary Broadcom,
  madwifi, nl80211 and wext driver interfaces.
endef


define Package/libiwinfo-lua
  SUBMENU:=Lua
  SECTION:=lang
  CATEGORY:=Languages
  TITLE:=libiwinfo Lua binding
ifeq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
  DEPENDS:=+libiwinfo +liblua
else
  DEPENDS:=+libiwinfo +liblua +lua
  MAINTAINER:=Jo-Philipp Wich <xm@subsignal.org>
endif
endef

define Package/libiwinfo-lua/description
  This is the Lua binding for the iwinfo library. It provides access to all enabled
  backends.
endef


define Package/iwinfo
  SECTION:=utils
  CATEGORY:=Utilities
  TITLE:=Generalized Wireless Information utility
  DEPENDS:=+libiwinfo
  MAINTAINER:=Jo-Philipp Wich <xm@subsignal.org>
endef

define Package/iwinfo/description
  Command line frontend for the wireless information library.
endef

ifneq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef
endif
define Build/Configure
endef


ifeq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
IWINFO_BACKENDS := \
	$(if $(CONFIG_PACKAGE_kmod-brcm-wl),wl) \
	$(if $(CONFIG_PACKAGE_kmod-brcm-wl-mini),wl) \
	$(if $(CONFIG_PACKAGE_kmod-brcm-wl-mimo),wl) \
	$(if $(CONFIG_PACKAGE_kmod-madwifi),madwifi) \
	$(if $(CONFIG_PACKAGE_kmod-cfg80211),nl80211) \
	$(if $(CONFIG_PACKAGE_kmod-qca-wifi-unified-profile),qcawifi) \
	$(if $(CONFIG_PACKAGE_kmod-qca-wifi-unified-perf),qcawifi)
else
IWINFO_BACKENDS := \
	$(if $(CONFIG_PACKAGE_kmod-brcm-wl),wl) \
	$(if $(CONFIG_PACKAGE_kmod-brcm-wl-mini),wl) \
	$(if $(CONFIG_PACKAGE_kmod-brcm-wl-mimo),wl) \
	$(if $(CONFIG_PACKAGE_kmod-madwifi),madwifi) \
	$(if $(CONFIG_PACKAGE_kmod-mac80211),nl80211)

endif

ifeq ($(CONFIG_PACKAGE_libnl),y)
LIB_NL:=$(STAGING_DIR)/usr/include/libnl
else
LIB_NL:=$(STAGING_DIR)/usr/include/libnl-tiny
endif


TARGET_CFLAGS += \
	-I$(LIB_NL) \
	-I$(STAGING_DIR)/usr/include \
	-D_GNU_SOURCE

MAKE_FLAGS += \
	FPIC="$(FPIC)" \
	CFLAGS="$(TARGET_CFLAGS)" \
	LDFLAGS="$(TARGET_LDFLAGS)" \
	BACKENDS="$(IWINFO_BACKENDS)"

define Build/InstallDev
	$(INSTALL_DIR) $(1)/usr/include/iwinfo
	$(CP) $(PKG_BUILD_DIR)/include/iwinfo.h $(1)/usr/include/
	$(CP) $(PKG_BUILD_DIR)/include/iwinfo/* $(1)/usr/include/iwinfo/
	$(INSTALL_DIR) $(1)/usr/lib
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/libiwinfo.so $(1)/usr/lib/libiwinfo.so
	$(INSTALL_DIR) $(1)/usr/lib/lua
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/iwinfo.so $(1)/usr/lib/lua/iwinfo.so
endef

define Package/libiwinfo/install
	$(INSTALL_DIR) $(1)/usr/lib
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/libiwinfo.so $(1)/usr/lib/libiwinfo.so
ifeq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
	$(INSTALL_DIR) $(1)/usr/share/libiwinfo
	$(INSTALL_DATA) $(PKG_BUILD_DIR)/hardware.txt $(1)/usr/share/libiwinfo/hardware.txt
endif
endef

define Package/libiwinfo-lua/install
	$(INSTALL_DIR) $(1)/usr/lib/lua
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/iwinfo.so $(1)/usr/lib/lua/iwinfo.so
endef

define Package/iwinfo/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/iwinfo $(1)/usr/bin/iwinfo
endef

$(eval $(call BuildPackage,libiwinfo))
$(eval $(call BuildPackage,libiwinfo-lua))
$(eval $(call BuildPackage,iwinfo))
