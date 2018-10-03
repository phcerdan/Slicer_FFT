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

#ifndef __qSlicerFrequencyFilteringFooBarWidget_h
#define __qSlicerFrequencyFilteringFooBarWidget_h

// Qt includes
#include <QWidget>

// FooBar Widgets includes
#include "qSlicerFrequencyFilteringModuleWidgetsExport.h"

class qSlicerFrequencyFilteringFooBarWidgetPrivate;

/// \ingroup Slicer_QtModules_FrequencyFiltering
class Q_SLICER_MODULE_FREQUENCYFILTERING_WIDGETS_EXPORT qSlicerFrequencyFilteringFooBarWidget
  : public QWidget
{
  Q_OBJECT
public:
  typedef QWidget Superclass;
  qSlicerFrequencyFilteringFooBarWidget(QWidget *parent=0);
  virtual ~qSlicerFrequencyFilteringFooBarWidget();

protected slots:

protected:
  QScopedPointer<qSlicerFrequencyFilteringFooBarWidgetPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerFrequencyFilteringFooBarWidget);
  Q_DISABLE_COPY(qSlicerFrequencyFilteringFooBarWidget);
};

#endif
