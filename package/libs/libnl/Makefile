#
# Copyright (C) 2006-2009 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=libnl
ifeq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
PKG_VERSION:=3.2.21
PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:=@ZyXEL_SITE/WIFI_Router
PKG_MD5SUM:=6fe7136558a9071e70673dcda38545b3
PKG_LICENSE:=LGPL-2.1

PKG_FIXUP:=autoreconf
else
PKG_VERSION:=2.0
PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
#PKG_SOURCE_URL:=http://www.infradead.org/~tgr/libnl/files/
PKG_SOURCE_URL:=@ZyXEL_SITE/opensource/libs
PKG_MD5SUM:=6aaf1e9802a17a7d702bb0638044ffa7

endif
PATCH_DIR:=patches-$(PKG_VERSION)
include $(INCLUDE_DIR)/package.mk

define Package/libnl
  SECTION:=libs
  CATEGORY:=Libraries
  TITLE:=netlink socket library
ifeq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
  DEPENDS:=+libpthread
endif
  URL:=http://people.suug.ch/~tgr/libnl/
endef

define Package/libnl/description
 This package contains a library for applications dealing with netlink sockets
endef

TARGET_CFLAGS += -ffunction-sections $(FPIC)
ifeq ($(CONFIG_KERNEL_ZYXEL_EXT_MARK),y)
TARGET_CFLAGS += -DZYXEL_EXT_MARK
endif

define Build/Compile
	$(call Build/Compile/Default)
	make -C $(PKG_BUILD_DIR) \
		DESTDIR="$(PKG_INSTALL_DIR)" \
		install
endef

define Build/InstallDev
	$(INSTALL_DIR) $(1)
	$(CP) $(PKG_INSTALL_DIR)/* $(1)/
	mkdir -p $(1)/usr/include/libnl
ifeq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
	$(CP) $(PKG_BUILD_DIR)/include/* $(1)/usr/include/libnl/
else
	$(CP) $(PKG_BUILD_DIR)/include/linux $(1)/usr/include/libnl/
endif
endef

define Package/libnl/install
	$(INSTALL_DIR) $(1)/usr/lib
ifeq ("$(strip ${ZCFG_PLATFORM})","QUALCOMM")
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libnl-route-3.so.* $(1)/usr/lib/
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libnl-genl-3.so.* $(1)/usr/lib/
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libnl-nf-3.so.* $(1)/usr/lib/
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libnl-3.so.* $(1)/usr/lib/
else
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libnl-route.so.* $(1)/usr/lib/
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libnl-genl.so.* $(1)/usr/lib/
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libnl-nf.so.* $(1)/usr/lib/
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libnl-route.so.* $(1)/usr/lib/
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libnl.so.* $(1)/usr/lib/
endif
endef

$(eval $(call BuildPackage,libnl))
