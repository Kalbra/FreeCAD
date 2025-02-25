/****************************************************************************
 *   Copyright (c) 2020 Zheng Lei (realthunder) <realthunder.dev@gmail.com> *
 *                                                                          *
 *   This file is part of the FreeCAD CAx development system.               *
 *                                                                          *
 *   This library is free software; you can redistribute it and/or          *
 *   modify it under the terms of the GNU Library General Public            *
 *   License as published by the Free Software Foundation; either           *
 *   version 2 of the License, or (at your option) any later version.       *
 *                                                                          *
 *   This library  is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU Library General Public License for more details.                   *
 *                                                                          *
 *   You should have received a copy of the GNU Library General Public      *
 *   License along with this library; see the file COPYING.LIB. If not,     *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,          *
 *   Suite 330, Boston, MA  02111-1307, USA                                 *
 *                                                                          *
 ****************************************************************************/

#ifndef GUI_DIALOG_DLGSETTINGSUI_H
#define GUI_DIALOG_DLGSETTINGSUI_H

class QTimer;
class QPropertyAnimation;

/*[[[cog
import DlgSettingsUI
DlgSettingsUI.declare_begin()
]]]*/

// Auto generated code (Tools/params_utils.py:482)
#include <Gui/PropertyPage.h>
#include <Gui/PrefWidgets.h>
// Auto generated code (Tools/params_utils.py:489)
class QLabel;
class QGroupBox;

namespace Gui {
namespace Dialog {
/** Preference dialog for various UI related settings

 * This class is auto generated by Gui/PreferencePages/DlgSettingsUI.py. Modify that file
 * instead of this one, if you want to make any change. You need
 * to install Cog Python package for code generation:
 * @code
 *     pip install cogapp
 * @endcode
 *
 * Once modified, you can regenerate the header and the source file,
 * @code
 *     python3 -m cogapp -r Gui/PreferencePages/DlgSettingsUI.h Gui/PreferencePages/DlgSettingsUI.cpp
 * @endcode
 */
class DlgSettingsUI : public Gui::Dialog::PreferencePage
{
    Q_OBJECT

public:
    DlgSettingsUI( QWidget* parent = 0 );
    ~DlgSettingsUI();

    void saveSettings();
    void loadSettings();
    void retranslateUi();

protected:
    void changeEvent(QEvent *e);

private:

    // Auto generated code (Tools/params_utils.py:400)
    QGroupBox * groupTreeview = nullptr;
    QLabel *labelItemBackground = nullptr;
    Gui::PrefColorButton *ItemBackground = nullptr;
    QLabel *labelItemBackgroundPadding = nullptr;
    Gui::PrefSpinBox *ItemBackgroundPadding = nullptr;
    Gui::PrefCheckBox *ResizableColumn = nullptr;
    Gui::PrefCheckBox *CheckBoxesSelection = nullptr;
    Gui::PrefCheckBox *HideColumn = nullptr;
    Gui::PrefCheckBox *HideScrollBar = nullptr;
    Gui::PrefCheckBox *HideHeaderView = nullptr;
    QLabel *labelIconSize = nullptr;
    Gui::PrefSpinBox *IconSize = nullptr;
    QLabel *labelFontSize = nullptr;
    Gui::PrefSpinBox *FontSize = nullptr;
    QLabel *labelItemSpacing = nullptr;
    Gui::PrefSpinBox *ItemSpacing = nullptr;

    // Auto generated code (Tools/params_utils.py:400)
    QGroupBox * groupOverlay = nullptr;
    Gui::PrefCheckBox *DockOverlayHideTabBar = nullptr;
    Gui::PrefCheckBox *DockOverlayHidePropertyViewScrollBar = nullptr;
    Gui::PrefCheckBox *DockOverlayAutoView = nullptr;
    Gui::PrefCheckBox *DockOverlayAutoMouseThrough = nullptr;
    Gui::PrefCheckBox *DockOverlayWheelPassThrough = nullptr;
    QLabel *labelDockOverlayWheelDelay = nullptr;
    Gui::PrefSpinBox *DockOverlayWheelDelay = nullptr;
    QLabel *labelDockOverlayAlphaRadius = nullptr;
    Gui::PrefSpinBox *DockOverlayAlphaRadius = nullptr;
    Gui::PrefCheckBox *DockOverlayCheckNaviCube = nullptr;
    QLabel *labelDockOverlayHintTriggerSize = nullptr;
    Gui::PrefSpinBox *DockOverlayHintTriggerSize = nullptr;
    QLabel *labelDockOverlayHintSize = nullptr;
    Gui::PrefSpinBox *DockOverlayHintSize = nullptr;
    QLabel *labelDockOverlayHintLeftOffset = nullptr;
    Gui::PrefSpinBox *DockOverlayHintLeftOffset = nullptr;
    QLabel *labelDockOverlayHintLeftLength = nullptr;
    Gui::PrefSpinBox *DockOverlayHintLeftLength = nullptr;
    QLabel *labelDockOverlayHintRightOffset = nullptr;
    Gui::PrefSpinBox *DockOverlayHintRightOffset = nullptr;
    QLabel *labelDockOverlayHintRightLength = nullptr;
    Gui::PrefSpinBox *DockOverlayHintRightLength = nullptr;
    QLabel *labelDockOverlayHintTopOffset = nullptr;
    Gui::PrefSpinBox *DockOverlayHintTopOffset = nullptr;
    QLabel *labelDockOverlayHintTopLength = nullptr;
    Gui::PrefSpinBox *DockOverlayHintTopLength = nullptr;
    QLabel *labelDockOverlayHintBottomOffset = nullptr;
    Gui::PrefSpinBox *DockOverlayHintBottomOffset = nullptr;
    QLabel *labelDockOverlayHintBottomLength = nullptr;
    Gui::PrefSpinBox *DockOverlayHintBottomLength = nullptr;
    Gui::PrefCheckBox *DockOverlayHintTabBar = nullptr;
    QLabel *labelDockOverlayHintDelay = nullptr;
    Gui::PrefSpinBox *DockOverlayHintDelay = nullptr;
    QLabel *labelDockOverlaySplitterHandleTimeout = nullptr;
    Gui::PrefSpinBox *DockOverlaySplitterHandleTimeout = nullptr;
    Gui::PrefCheckBox *DockOverlayActivateOnHover = nullptr;
    QLabel *labelDockOverlayDelay = nullptr;
    Gui::PrefSpinBox *DockOverlayDelay = nullptr;
    QLabel *labelDockOverlayAnimationDuration = nullptr;
    Gui::PrefSpinBox *DockOverlayAnimationDuration = nullptr;
    QLabel *labelDockOverlayAnimationCurve = nullptr;
    Gui::PrefComboBox *DockOverlayAnimationCurve = nullptr;
//[[[end]]]

    // -----------------------------------------------------------------------------------
    // user code start

    Q_PROPERTY(qreal offset1 READ offset1 WRITE setOffset1 DESIGNABLE true SCRIPTABLE true)
    qreal offset1() const;
    void setOffset1(qreal);

private:
    void init();
    void onCurveChange(int index);

private:
    QTimer *timer;
    QPropertyAnimation *animator1;
    qreal t1 = 0;
    qreal a1 = 0, b1 = 0;

    // user code end
    // -----------------------------------------------------------------------------------

/*[[[cog
import DlgSettingsUI
DlgSettingsUI.declare_end()
]]]*/

// Auto generated code (Tools/params_utils.py:536)
};
} // namespace Dialog
} // namespace Gui
//[[[end]]]
#endif // GUI_DIALOG_DLGSETTINGSUI_H
