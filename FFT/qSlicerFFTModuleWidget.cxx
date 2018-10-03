/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QDebug>

// SlicerQt includes
#include "qSlicerFFTModuleWidget.h"
#include "ui_qSlicerFFTModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerFFTModuleWidgetPrivate: public Ui_qSlicerFFTModuleWidget
{
public:
  qSlicerFFTModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerFFTModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerFFTModuleWidgetPrivate::qSlicerFFTModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerFFTModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerFFTModuleWidget::qSlicerFFTModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerFFTModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerFFTModuleWidget::~qSlicerFFTModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerFFTModuleWidget::setup()
{
  Q_D(qSlicerFFTModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}
