// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Diagnostics.CodeAnalysis;

namespace Rivet.Models;

public static class RivetTypeIdRegistry {
	static RivetTypeIdRegistry() {
		Names[RivetTypeId.Checksum("Archive TOC Header"u8)] = "Archive TOC Header";
		Names[RivetTypeId.Checksum("Archive TOC Asset IDs"u8)] = "Archive TOC Asset IDs";
		Names[RivetTypeId.Checksum("Archive TOC Asset Metadata"u8)] = "Archive TOC Asset Metadata";
		Names[RivetTypeId.Checksum("Archive TOC File Metadata"u8)] = "Archive TOC File Metadata";
		Names[RivetTypeId.Checksum("Archive TOC Texture Asset Ids"u8)] = "Archive TOC Texture Asset Ids";
		Names[RivetTypeId.Checksum("Archive TOC Texture Meta"u8)] = "Archive TOC Texture Meta";
		Names[RivetTypeId.Checksum("Archive TOC Texture Header"u8)] = "Archive TOC Texture Header";
		Names[RivetTypeId.Checksum("Archive TOC Asset Header Data"u8)] = "Archive TOC Asset Header Data";
		Names[RivetTypeId.Checksum("Archive TOC Key Asset IDs"u8)] = "Archive TOC Key Asset IDs";
		Names[RivetTypeId.Checksum("Archive TOC Asset Dupe Metadata"u8)] = "Archive TOC Asset Dupe Metadata";
		Names[RivetTypeId.Checksum("Asset Types"u8)] = "Asset Types";
		Names[RivetTypeId.Checksum("Asset Ids"u8)] = "Asset Ids";
		Names[RivetTypeId.Checksum("Dependency Links"u8)] = "Dependency Links";
		Names[RivetTypeId.Checksum("Asset Names"u8)] = "Asset Names";
		Names[RivetTypeId.Checksum("Dependency Links Heads"u8)] = "Dependency Links Heads";
		Names[RivetTypeId.Checksum("LC Links Heads"u8)] = "LC Links Heads";
		Names[RivetTypeId.Checksum("Localization Header Built"u8)] = "Localization Header Built";
		Names[RivetTypeId.Checksum("Localization Flags Built"u8)] = "Localization Flags Built";
		Names[RivetTypeId.Checksum("Localization Tags Built"u8)] = "Localization Tags Built";
		Names[RivetTypeId.Checksum("Localization Text Built"u8)] = "Localization Text Built";
		Names[RivetTypeId.Checksum("Localization TagOffsets Built"u8)] = "Localization TagOffsets Built";
		Names[RivetTypeId.Checksum("Localization TextOffsets Built"u8)] = "Localization TextOffsets Built";
		Names[RivetTypeId.Checksum("Localization SortedIndexes Built"u8)] = "Localization SortedIndexes Built";
		Names[RivetTypeId.Checksum("Localization SortedHashes Built"u8)] = "Localization SortedHashes Built";
		Names[RivetTypeId.Checksum("Config Asset Refs"u8)] = "Config Asset Refs";
		Names[RivetTypeId.Checksum("Config Type"u8)] = "Config Type";
		Names[RivetTypeId.Checksum("Config Built"u8)] = "Config Built";
		Names[RivetTypeId.Checksum("Texture Header"u8)] = "Texture Header";
		Names[RivetTypeId.Checksum("Model Anim Dynamics Def"u8)] = "Model Anim Dynamics Def";
		Names[RivetTypeId.Checksum("Model Anim Geom Info"u8)] = "Model Anim Geom Info";
		Names[RivetTypeId.Checksum("Model Anim Geom Particles"u8)] = "Model Anim Geom Particles";
		Names[RivetTypeId.Checksum("Model Anim Morph Data"u8)] = "Model Anim Morph Data";
		Names[RivetTypeId.Checksum("Model Anim Morph Indices"u8)] = "Model Anim Morph Indices";
		Names[RivetTypeId.Checksum("Model Anim Morph Info"u8)] = "Model Anim Morph Info";
		Names[RivetTypeId.Checksum("Model Anim Ziva Info"u8)] = "Model Anim Ziva Info";
		Names[RivetTypeId.Checksum("Model Anim Ziva Data"u8)] = "Model Anim Ziva Data";
		Names[RivetTypeId.Checksum("Model Bind Pose"u8)] = "Model Bind Pose";
		Names[RivetTypeId.Checksum("Model Built"u8)] = "Model Built";
		Names[RivetTypeId.Checksum("Model Col Vert"u8)] = "Model Col Vert";
		Names[RivetTypeId.Checksum("Model Collision Index Data"u8)] = "Model Collision Index Data";
		Names[RivetTypeId.Checksum("Model Collision Vertex Data"u8)] = "Model Collision Vertex Data";
		Names[RivetTypeId.Checksum("Model GPU Skin"u8)] = "Model GPU Skin";
		Names[RivetTypeId.Checksum("Model Index"u8)] = "Model Index";
		Names[RivetTypeId.Checksum("Model Joint"u8)] = "Model Joint";
		Names[RivetTypeId.Checksum("Model Joint Bspheres"u8)] = "Model Joint Bspheres";
		Names[RivetTypeId.Checksum("Model Joint Hierarchy"u8)] = "Model Joint Hierarchy";
		Names[RivetTypeId.Checksum("Model Joint Lookup"u8)] = "Model Joint Lookup";
		Names[RivetTypeId.Checksum("Model Leaf Ids"u8)] = "Model Leaf Ids";
		Names[RivetTypeId.Checksum("Model Locator"u8)] = "Model Locator";
		Names[RivetTypeId.Checksum("Model Locator Lookup"u8)] = "Model Locator Lookup";
		Names[RivetTypeId.Checksum("Model Look"u8)] = "Model Look";
		Names[RivetTypeId.Checksum("Model Look Built"u8)] = "Model Look Built";
		Names[RivetTypeId.Checksum("Model Look Group"u8)] = "Model Look Group";
		Names[RivetTypeId.Checksum("Model Material"u8)] = "Model Material";
		Names[RivetTypeId.Checksum("Model Mirror Ids"u8)] = "Model Mirror Ids";
		Names[RivetTypeId.Checksum("Model Morph Data"u8)] = "Model Morph Data";
		Names[RivetTypeId.Checksum("Model Morph Info"u8)] = "Model Morph Info";
		Names[RivetTypeId.Checksum("Model Ray-Tracing Parameters"u8)] = "Model Ray-Tracing Parameters";
		Names[RivetTypeId.Checksum("Model Physics Data"u8)] = "Model Physics Data"; // havok physics data
		Names[RivetTypeId.Checksum("Model Render Overrides"u8)] = "Model Render Overrides";
		Names[RivetTypeId.Checksum("Model Skin Batch"u8)] = "Model Skin Batch";
		Names[RivetTypeId.Checksum("Model Skin Data"u8)] = "Model Skin Data";
		Names[RivetTypeId.Checksum("Model Skin Joint Remap"u8)] = "Model Skin Joint Remap";
		Names[RivetTypeId.Checksum("Model Splines"u8)] = "Model Splines";
		Names[RivetTypeId.Checksum("Model Spline Subsets"u8)] = "Model Spline Subsets";
		Names[RivetTypeId.Checksum("Model Spline Skin Binding"u8)] = "Model Spline Skin Binding";
		Names[RivetTypeId.Checksum("Model Spline Joint Binding"u8)] = "Model Spline Joint Binding";
		Names[RivetTypeId.Checksum("Model Spline Joint Weights"u8)] = "Model Spline Joint Weights";
		Names[RivetTypeId.Checksum("Model Splines CVs"u8)] = "Model Splines CVs";
		Names[RivetTypeId.Checksum("Model Std Vert"u8)] = "Model Std Vert";
		Names[RivetTypeId.Checksum("Model Subset"u8)] = "Model Subset";
		Names[RivetTypeId.Checksum("Model Tex Vert"u8)] = "Model Tex Vert";
		Names[RivetTypeId.Checksum("Model Texture Overrides"u8)] = "Model Texture Overrides";
		Names[RivetTypeId.Checksum("Model UV1 Vert"u8)] = "Model UV1 Vert";
	}

	public static Dictionary<uint, string> Names { get; } = new();

	public static bool TryGetName(uint hash, [MaybeNullWhen(false)] out string name) => Names.TryGetValue(hash, out name);
}
