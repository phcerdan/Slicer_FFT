/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicerFFTFooBarWidget.h"
#include "ui_qSlicerFFTFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_FFT
class qSlicerFFTFooBarWidgetPrivate
  : public Ui_qSlicerFFTFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerFFTFooBarWidget);
protected:
  qSlicerFFTFooBarWidget* const q_ptr;

public:
  qSlicerFFTFooBarWidgetPrivate(
    qSlicerFFTFooBarWidget& object);
  virtual void setupUi(qSlicerFFTFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerFFTFooBarWidgetPrivate
::qSlicerFFTFooBarWidgetPrivate(
  qSlicerFFTFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerFFTFooBarWidgetPrivate
::setupUi(qSlicerFFTFooBarWidget* widget)
{
  this->Ui_qSlicerFFTFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerFFTFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerFFTFooBarWidget
::qSlicerFFTFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerFFTFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerFFTFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerFFTFooBarWidget
::~qSlicerFFTFooBarWidget()
{
}
