include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/package.mk

PKG_NAME:=avast-init
PKG_VERSION:=0.1
PKG_RELEASE:=1

define Package/avast-init
	SECTION:=base
	CATEGORY:=System
	TITLE:=Avast Skyline Init System
	URL:=https://www.avast.com/
endef

define Package/avast-init/description
	Avast Skyline Base Init Files
endef

define Build/Configure
endef

define Build/Compile
endef

define Package/avast-init/install
	$(INSTALL_DIR) $(1)/etc/ssl
	$(INSTALL_DIR) $(1)/etc/ssl/certs
	$(INSTALL_DIR) $(1)/3rd_party
	$(CP) ./files/ssl/certs/244b5494.0 $(1)/etc/ssl/certs/244b5494.0
	$(CP) ./files/ssl/certs/AmazonRootCA1.crt $(1)/etc/ssl/certs/AmazonRootCA1.crt
	$(CP) ./files/ssl/certs/DigiCertHighAssuranceEVRootCA.pem $(1)/etc/ssl/certs/DigiCertHighAssuranceEVRootCA.pem
	$(CP) ./files/ssl/certs/ce5e74ef.0 $(1)/etc/ssl/certs/ce5e74ef.0
	$(CP) ./files/avast-agent_0.7-46_brcm963xx_RC3-Prod.ipk $(1)/3rd_party/avast-agent_0.7-46_brcm963xx_RC3-Prod.ipk
endef

$(eval $(call BuildPackage,avast-init))