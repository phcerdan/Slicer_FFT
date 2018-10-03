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

#ifndef __qSlicerFFTFooBarWidget_h
#define __qSlicerFFTFooBarWidget_h

// Qt includes
#include <QWidget>

// FooBar Widgets includes
#include "qSlicerFFTModuleWidgetsExport.h"

class qSlicerFFTFooBarWidgetPrivate;

/// \ingroup Slicer_QtModules_FFT
class Q_SLICER_MODULE_FFT_WIDGETS_EXPORT qSlicerFFTFooBarWidget
  : public QWidget
{
  Q_OBJECT
public:
  typedef QWidget Superclass;
  qSlicerFFTFooBarWidget(QWidget *parent=0);
  virtual ~qSlicerFFTFooBarWidget();

protected slots:

protected:
  QScopedPointer<qSlicerFFTFooBarWidgetPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerFFTFooBarWidget);
  Q_DISABLE_COPY(qSlicerFFTFooBarWidget);
};

#endif
