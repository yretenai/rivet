// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.IO;

namespace Rivet.Models;

public record RivetAssetReference(RivetAssetId AssetId, string Path, RivetTypeId TypeId);
