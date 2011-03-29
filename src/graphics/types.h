/* eos - A reimplementation of BioWare's Aurora engine
 * Copyright (c) 2010-2011 Sven Hesse (DrMcCoy), Matthew Hoops (clone2727)
 *
 * The Infinity, Aurora, Odyssey and Eclipse engines, Copyright (c) BioWare corp.
 * The Electron engine, Copyright (c) Obsidian Entertainment and BioWare corp.
 *
 * This file is part of eos and is distributed under the terms of
 * the GNU General Public Licence. See COPYING for more informations.
 */

/** @file graphics/types.h
 *  Basic graphics types.
 */

#ifndef GRAPHICS_TYPES_H
#define GRAPHICS_TYPES_H

#include <SDL.h>

#include "glew/glew.h"

namespace Graphics {

typedef GLuint TextureID;
typedef GLuint ListID;

enum PixelFormat {
	kPixelFormatRGB  = GL_RGB ,
	kPixelFormatRGBA = GL_RGBA,
	kPixelFormatBGR  = GL_BGR ,
	kPixelFormatBGRA = GL_BGRA,
};

enum PixelFormatRaw {
	kPixelFormatRGBA8  = GL_RGBA8,
	kPixelFormatRGB8   = GL_RGB8,
	kPixelFormatRGB5A1 = GL_RGB5_A1,
	kPixelFormatRGB5   = GL_RGB5,
	kPixelFormatDXT1   = GL_COMPRESSED_RGB_S3TC_DXT1_EXT,
	kPixelFormatDXT3   = GL_COMPRESSED_RGBA_S3TC_DXT3_EXT,
	kPixelFormatDXT5   = GL_COMPRESSED_RGBA_S3TC_DXT5_EXT
};

enum PixelDataType {
	kPixelDataType8    = GL_UNSIGNED_BYTE,
	kPixelDataType1555 = GL_UNSIGNED_SHORT_1_5_5_5_REV,
	kPixelDataType565  = GL_UNSIGNED_SHORT_5_6_5
};

enum QueueType {
	kQueueTexture               = 0, ///< A texture.
	kQueueNewTexture               , ///< A newly created texture.
	kQueueWorldObject              , ///< An object in 3D space.
	kQueueVisibleWorldObject       , ///< A visible object in 3D space.
	kQueueGUIFrontObject           , ///< A GUI object.
	kQueueVisibleGUIFrontObject    , ///< A visible GUI object.
	kQueueVideo                    , ///< A currently playing video.
	kQueueGLContainer              , ///< An object containing OpenGL structures.
	kQueueMAX                        ///< For range checks.
};

enum RenderableType {
	kRenderableTypeObject   = 0,
	kRenderableTypeGUIFront
};

enum RenderPass {
	kRenderPassOpaque,      ///< Only render opaque parts.
	kRenderPassTransparent, ///< Only render transparent parts.
	kRenderPassAll          ///< Render all parts.
};

} // End of namespace Graphics

#endif // GRAPHICS_TYPES_H
