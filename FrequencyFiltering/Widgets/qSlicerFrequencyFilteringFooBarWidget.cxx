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
#include "qSlicerFrequencyFilteringFooBarWidget.h"
#include "ui_qSlicerFrequencyFilteringFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_FrequencyFiltering
class qSlicerFrequencyFilteringFooBarWidgetPrivate
  : public Ui_qSlicerFrequencyFilteringFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerFrequencyFilteringFooBarWidget);
protected:
  qSlicerFrequencyFilteringFooBarWidget* const q_ptr;

public:
  qSlicerFrequencyFilteringFooBarWidgetPrivate(
    qSlicerFrequencyFilteringFooBarWidget& object);
  virtual void setupUi(qSlicerFrequencyFilteringFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerFrequencyFilteringFooBarWidgetPrivate
::qSlicerFrequencyFilteringFooBarWidgetPrivate(
  qSlicerFrequencyFilteringFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerFrequencyFilteringFooBarWidgetPrivate
::setupUi(qSlicerFrequencyFilteringFooBarWidget* widget)
{
  this->Ui_qSlicerFrequencyFilteringFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerFrequencyFilteringFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerFrequencyFilteringFooBarWidget
::qSlicerFrequencyFilteringFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerFrequencyFilteringFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerFrequencyFilteringFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerFrequencyFilteringFooBarWidget
::~qSlicerFrequencyFilteringFooBarWidget()
{
}
