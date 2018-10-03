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

// FrequencyFiltering Logic includes
#include <vtkSlicerFrequencyFilteringLogic.h>

// FrequencyFiltering includes
#include "qSlicerFrequencyFilteringModule.h"
#include "qSlicerFrequencyFilteringModuleWidget.h"

//-----------------------------------------------------------------------------
#if (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
#include <QtPlugin>
Q_EXPORT_PLUGIN2(qSlicerFrequencyFilteringModule, qSlicerFrequencyFilteringModule);
#endif

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerFrequencyFilteringModulePrivate
{
public:
  qSlicerFrequencyFilteringModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerFrequencyFilteringModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerFrequencyFilteringModulePrivate::qSlicerFrequencyFilteringModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerFrequencyFilteringModule methods

//-----------------------------------------------------------------------------
qSlicerFrequencyFilteringModule::qSlicerFrequencyFilteringModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerFrequencyFilteringModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerFrequencyFilteringModule::~qSlicerFrequencyFilteringModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerFrequencyFilteringModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerFrequencyFilteringModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerFrequencyFilteringModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerFrequencyFilteringModule::icon() const
{
  return QIcon(":/Icons/FrequencyFiltering.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerFrequencyFilteringModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerFrequencyFilteringModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerFrequencyFilteringModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerFrequencyFilteringModule
::createWidgetRepresentation()
{
  return new qSlicerFrequencyFilteringModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerFrequencyFilteringModule::createLogic()
{
  return vtkSlicerFrequencyFilteringLogic::New();
}
