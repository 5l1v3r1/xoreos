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
 *  The KotOR 2 class selection.
 */

#include "src/aurora/talkman.h"

#include "src/engines/kotor2/gui/chargen/classselection.h"

namespace Engines {

namespace KotOR2 {

ClassSelection::ClassSelection(Module *module, Console *console) : GUI(console) {
	load("classsel_p");

	_module = module;

	Common::UString malePrefix, femalePrefix;
	malePrefix = TalkMan.getString(646);
	femalePrefix = TalkMan.getString(647);

	_guardianMaleTitle = malePrefix + " " + TalkMan.getString(355);
	_guardianFemaleTitle = femalePrefix + " " + TalkMan.getString(355);
	_consularMaleTitle = malePrefix + " " + TalkMan.getString(354);
	_consularFemaleTitle = femalePrefix + " " + TalkMan.getString(354);
	_sentinelMaleTitle = malePrefix + " " + TalkMan.getString(353);
	_sentinelFemaleTitle = femalePrefix + " " + TalkMan.getString(353);

	_guardianDescription = TalkMan.getString(48032);
	_sentinelDescription = TalkMan.getString(48033);
	_consularDescription = TalkMan.getString(48031);

	_labelDesc = getLabel("LBL_DESC");
	_labelDesc->setWrapped(true);

	_labelTitle = getLabel("LBL_CLASS");

	_consularMaleButton = getButton("BTN_SEL1");
	_guardianMaleButton = getButton("BTN_SEL2");
	_sentinelMaleButton = getButton("BTN_SEL3");
	_sentinelFemaleButton = getButton("BTN_SEL4");
	_guardianFemaleButton = getButton("BTN_SEL5");
	_consularFemaleButton = getButton("BTN_SEL6");

	_labelDesc->setText(_consularDescription);
	_labelTitle->setText(_consularMaleTitle);
	_hoveredButton = _consularMaleButton;
}

void ClassSelection::callbackRun() {
	if (_consularMaleButton->isHovered() && _hoveredButton != _consularMaleButton) {
		_labelDesc->setText(_consularDescription);
		_labelTitle->setText(_consularMaleTitle);
		_hoveredButton = _consularMaleButton;
	} else if (_consularFemaleButton->isHovered() && _hoveredButton != _consularFemaleButton) {
		_labelDesc->setText(_consularDescription);
		_labelTitle->setText(_consularFemaleTitle);
		_hoveredButton = _consularFemaleButton;
	} else if (_sentinelMaleButton->isHovered() && _hoveredButton != _sentinelMaleButton) {
		_labelDesc->setText(_sentinelDescription);
		_labelTitle->setText(_sentinelMaleTitle);
		_hoveredButton = _sentinelMaleButton;
	} else if (_sentinelFemaleButton->isHovered() && _hoveredButton != _sentinelFemaleButton) {
		_labelDesc->setText(_sentinelDescription);
		_labelTitle->setText(_sentinelFemaleTitle);
		_hoveredButton = _sentinelFemaleButton;
	} else if (_guardianMaleButton->isHovered() && _hoveredButton != _guardianMaleButton) {
		_labelDesc->setText(_guardianDescription);
		_labelTitle->setText(_guardianMaleTitle);
		_hoveredButton = _guardianMaleButton;
	} else if (_guardianFemaleButton->isHovered() && _hoveredButton != _guardianFemaleButton) {
		_labelDesc->setText(_guardianDescription);
		_labelTitle->setText(_guardianFemaleTitle);
		_hoveredButton = _guardianFemaleButton;
	}
}

void ClassSelection::callbackActive(Widget &widget) {
	//TODO Add different character generations
	if (widget.getTag() == "BTN_SEL1") {
		return;
	}
	if (widget.getTag() == "BTN_SEL2") {
		return;
	}
	if (widget.getTag() == "BTN_SEL3") {
		return;
	}
	if (widget.getTag() == "BTN_SEL4") {
		return;
	}
	if (widget.getTag() == "BTN_SEL5") {
		return;
	}
	if (widget.getTag() == "BTN_SEL6") {
		return;
	}

	if (widget.getTag() == "BTN_BACK") {
		_returnCode = 1;
		return;
	}
}

} // End of namespace KotOR2

} // End of namespace Engines