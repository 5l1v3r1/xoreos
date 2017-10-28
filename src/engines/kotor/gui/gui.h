/* xoreos - A reimplementation of BioWare's Aurora engine
 *
 * xoreos is the legal property of its developers, whose names
 * can be found in the AUTHORS file distributed with this source
 * distribution.
 *
 * xoreos is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * xoreos is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with xoreos. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file
 *  A KotOR GUI.
 */

#ifndef ENGINES_KOTOR_GUI_GUI_H
#define ENGINES_KOTOR_GUI_GUI_H

#include "src/common/scopedptr.h"

#include "src/aurora/types.h"

#include "src/graphics/aurora/types.h"
#include "src/graphics/aurora/highlightable.h"

#include "src/engines/aurora/gui.h"

#include "src/engines/kotor/gui/guibackground.h"

namespace Engines {

namespace KotOR {

class KotORWidget;

class WidgetPanel;
class WidgetLabel;
class WidgetProtoItem;
class WidgetButton;
class WidgetCheckBox;
class WidgetSlider;
class WidgetScrollbar;
class WidgetProgressbar;
class WidgetListBox;

/** A KotOR GUI. */
class GUI : public Engines::GUI {
public:
	GUI(::Engines::Console *console = 0);
	~GUI();

	virtual void show(); ///< Show the GUI.
	virtual void hide(); ///< Hide the GUI.

protected:
	enum WidgetType {
		kWidgetTypeInvalid     = - 1,
		kWidgetTypePanel       =   2,
		kWidgetTypeLabel       =   4,
		kWidgetTypeProtoItem   =   5,
		kWidgetTypeButton      =   6,
		kWidgetTypeCheckBox    =   7,
		kWidgetTypeSlider      =   8,
		kWidgetTypeScrollbar   =   9,
		kWidgetTypeProgressbar =  10,
		kWidgetTypeListBox     =  11
	};

	virtual void mouseUp();
	virtual void mouseDown();

	void load(const Common::UString &resref, float width = 0.0f, float height = 0.0f);

	virtual void initWidget(Widget &widget);

	WidgetPanel       *getPanel      (const Common::UString &tag, bool vital = false);
	WidgetLabel       *getLabel      (const Common::UString &tag, bool vital = false);
	WidgetProtoItem   *getProtoItem  (const Common::UString &tag, bool vital = false);
	WidgetButton      *getButton     (const Common::UString &tag, bool vital = false);
	WidgetCheckBox    *getCheckBox   (const Common::UString &tag, bool vital = false);
	WidgetSlider      *getSlider     (const Common::UString &tag, bool vital = false);
	WidgetScrollbar   *getScrollbar  (const Common::UString &tag, bool vital = false);
	WidgetProgressbar *getProgressbar(const Common::UString &tag, bool vital = false);
	WidgetListBox     *getListBox    (const Common::UString &tag, bool vital = false);

	void addBackground(const Common::UString &background);

	void setCheckBoxState(const Common::UString &tag, bool state);
	bool getCheckBoxState(const Common::UString &tag);

private:
	struct WidgetContext {
		const Aurora::GFF3Struct *strct;

		WidgetType type;

		Common::UString tag;
		KotORWidget *widget;

		Widget *parent;

		WidgetContext(const Aurora::GFF3Struct &s, Widget *p);
	};

	float _widgetZ;

	Common::ScopedPtr<GUIBackground> _background;

	Common::UString _name;

	void loadWidget(const Aurora::GFF3Struct &strct, Widget *parent, float width, float height);

	void createWidget(WidgetContext &ctx);
};

} // End of namespace KotOR

} // End of namespace Engines

#endif // ENGINES_KOTOR_GUI_GUI_H
