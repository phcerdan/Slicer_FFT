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

// FFT Logic includes
#include <vtkSlicerFFTLogic.h>

// FFT includes
#include "qSlicerFFTModule.h"
#include "qSlicerFFTModuleWidget.h"

//-----------------------------------------------------------------------------
#if (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
#include <QtPlugin>
Q_EXPORT_PLUGIN2(qSlicerFFTModule, qSlicerFFTModule);
#endif

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerFFTModulePrivate
{
public:
  qSlicerFFTModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerFFTModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerFFTModulePrivate::qSlicerFFTModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerFFTModule methods

//-----------------------------------------------------------------------------
qSlicerFFTModule::qSlicerFFTModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerFFTModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerFFTModule::~qSlicerFFTModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerFFTModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerFFTModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerFFTModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerFFTModule::icon() const
{
  return QIcon(":/Icons/FFT.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerFFTModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerFFTModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerFFTModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerFFTModule
::createWidgetRepresentation()
{
  return new qSlicerFFTModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerFFTModule::createLogic()
{
  return vtkSlicerFFTLogic::New();
}
