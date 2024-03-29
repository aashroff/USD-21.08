//
// Copyright 2020 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#ifndef PXR_IMAGING_HD_ST_MATERIALX_FILTER_H
#define PXR_IMAGING_HD_ST_MATERIALX_FILTER_H

#include "pxr/pxr.h"
#include "pxr/imaging/hd/material.h"
#include "pxr/imaging/hdSt/tokens.h"
#include "pxr/usd/sdf/path.h"
#include <MaterialXCore/Document.h>
#include <MaterialXFormat/Util.h>

PXR_NAMESPACE_OPEN_SCOPE

// Storing MaterialX-Hydra counterparts and other Hydra specific information
struct MxHdInfo {
    MxHdInfo() 
        : textureMap(MaterialX::StringMap()), 
          primvarMap(MaterialX::StringMap()), 
          defaultTexcoordName("st"),
          materialTag(HdStMaterialTagTokens->defaultMaterialTag.GetString()) {}
    MaterialX::StringMap textureMap;
    MaterialX::StringMap primvarMap;
    std::string defaultTexcoordName;
    std::string materialTag;
};

/// MaterialX Filter
/// Converting a MaterialX node to one with a generated MaterialX glslfx file
void HdSt_ApplyMaterialXFilter(
    HdMaterialNetwork2* hdNetwork,
    SdfPath const& materialPath,
    HdMaterialNode2 const& terminalNode,
    SdfPath const& terminalNodePath);

// Generates the glsfx source code for the given MaterialX Document
std::string HdSt_GenMaterialXShaderCode(
    MaterialX::DocumentPtr const& mxDoc,
    MaterialX::FileSearchPath const& searchPath,
    MxHdInfo const& mxHdInfo=MxHdInfo());

PXR_NAMESPACE_CLOSE_SCOPE

#endif