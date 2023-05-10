## @file
# Redfish Client DSC include file for [Components*] section of all Architectures.
#
# This file can be included to the [Components*] section(s) of a platform DSC file
# by using "!include RedfishClientPkg/RedfishClientComponents.dsc.inc" to specify the INF files
# of EDKII Redfish drivers according to the value of flags described in
# "RedfishClientDefines.dsc.inc".
#
# (C) Copyright 2021-2022 Hewlett Packard Enterprise Development LP<BR>
#
#    SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

!if $(REDFISH_CLIENT) == TRUE
  RedfishClientPkg/RedfishFeatureCoreDxe/RedfishFeatureCoreDxe.inf
  RedfishClientPkg/RedfishETagDxe/RedfishETagDxe.inf
  RedfishClientPkg/RedfishConfigLangMapDxe/RedfishConfigLangMapDxe.inf
  #
  # Below two modules should be pulled in by build tool.
  #
  RedfishClientPkg/Features/Memory/V1_7_1/Dxe/RedfishMemoryDxe.inf
  RedfishClientPkg/Features/RedfishMemoryCollectionDxe/RedfishMemoryCollectionDxe.inf

  !include RedfishClientPkg/RedfishJsonStructureDxe.dsc.inc

  #
  # Below two modules should be pulled in by build tool.
  #
  RedfishClientPkg/Converter/Memory/v1_7_1/RedfishMemory_V1_7_1_Dxe.inf
  RedfishClientPkg/Converter/MemoryCollection/RedfishMemoryCollection_Dxe.inf
!endif