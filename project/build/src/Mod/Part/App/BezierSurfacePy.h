
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef PART_BEZIERSURFACEPY_H
#define PART_BEZIERSURFACEPY_H

#include <Mod/Part/App/GeometrySurfacePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>

namespace Part
{

//===========================================================================
// BezierSurfacePy - Python wrapper
//===========================================================================

/** The python export class for GeomBezierSurface
 */
class PartExport BezierSurfacePy : public Part::GeometrySurfacePy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;};

public:
    BezierSurfacePy(GeomBezierSurface *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~BezierSurfacePy();

    typedef GeomBezierSurface* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the bounds() method
    static PyObject * staticCallback_bounds (PyObject *self, PyObject *args);
    /// implementer for the bounds() method
    PyObject*  bounds(PyObject *args);
    /// callback for the isURational() method
    static PyObject * staticCallback_isURational (PyObject *self, PyObject *args);
    /// implementer for the isURational() method
    PyObject*  isURational(PyObject *args);
    /// callback for the isVRational() method
    static PyObject * staticCallback_isVRational (PyObject *self, PyObject *args);
    /// implementer for the isVRational() method
    PyObject*  isVRational(PyObject *args);
    /// callback for the isUPeriodic() method
    static PyObject * staticCallback_isUPeriodic (PyObject *self, PyObject *args);
    /// implementer for the isUPeriodic() method
    PyObject*  isUPeriodic(PyObject *args);
    /// callback for the isVPeriodic() method
    static PyObject * staticCallback_isVPeriodic (PyObject *self, PyObject *args);
    /// implementer for the isVPeriodic() method
    PyObject*  isVPeriodic(PyObject *args);
    /// callback for the isUClosed() method
    static PyObject * staticCallback_isUClosed (PyObject *self, PyObject *args);
    /// implementer for the isUClosed() method
    PyObject*  isUClosed(PyObject *args);
    /// callback for the isVClosed() method
    static PyObject * staticCallback_isVClosed (PyObject *self, PyObject *args);
    /// implementer for the isVClosed() method
    PyObject*  isVClosed(PyObject *args);
    /// callback for the increase() method
    static PyObject * staticCallback_increase (PyObject *self, PyObject *args);
    /// implementer for the increase() method
    PyObject*  increase(PyObject *args);
    /// callback for the insertPoleColAfter() method
    static PyObject * staticCallback_insertPoleColAfter (PyObject *self, PyObject *args);
    /// implementer for the insertPoleColAfter() method
    PyObject*  insertPoleColAfter(PyObject *args);
    /// callback for the insertPoleRowAfter() method
    static PyObject * staticCallback_insertPoleRowAfter (PyObject *self, PyObject *args);
    /// implementer for the insertPoleRowAfter() method
    PyObject*  insertPoleRowAfter(PyObject *args);
    /// callback for the insertPoleColBefore() method
    static PyObject * staticCallback_insertPoleColBefore (PyObject *self, PyObject *args);
    /// implementer for the insertPoleColBefore() method
    PyObject*  insertPoleColBefore(PyObject *args);
    /// callback for the insertPoleRowBefore() method
    static PyObject * staticCallback_insertPoleRowBefore (PyObject *self, PyObject *args);
    /// implementer for the insertPoleRowBefore() method
    PyObject*  insertPoleRowBefore(PyObject *args);
    /// callback for the removePoleCol() method
    static PyObject * staticCallback_removePoleCol (PyObject *self, PyObject *args);
    /// implementer for the removePoleCol() method
    PyObject*  removePoleCol(PyObject *args);
    /// callback for the removePoleRow() method
    static PyObject * staticCallback_removePoleRow (PyObject *self, PyObject *args);
    /// implementer for the removePoleRow() method
    PyObject*  removePoleRow(PyObject *args);
    /// callback for the segment() method
    static PyObject * staticCallback_segment (PyObject *self, PyObject *args);
    /// implementer for the segment() method
    PyObject*  segment(PyObject *args);
    /// callback for the setPole() method
    static PyObject * staticCallback_setPole (PyObject *self, PyObject *args);
    /// implementer for the setPole() method
    PyObject*  setPole(PyObject *args);
    /// callback for the setPoleCol() method
    static PyObject * staticCallback_setPoleCol (PyObject *self, PyObject *args);
    /// implementer for the setPoleCol() method
    PyObject*  setPoleCol(PyObject *args);
    /// callback for the setPoleRow() method
    static PyObject * staticCallback_setPoleRow (PyObject *self, PyObject *args);
    /// implementer for the setPoleRow() method
    PyObject*  setPoleRow(PyObject *args);
    /// callback for the getPole() method
    static PyObject * staticCallback_getPole (PyObject *self, PyObject *args);
    /// implementer for the getPole() method
    PyObject*  getPole(PyObject *args);
    /// callback for the getPoles() method
    static PyObject * staticCallback_getPoles (PyObject *self, PyObject *args);
    /// implementer for the getPoles() method
    PyObject*  getPoles(PyObject *args);
    /// callback for the setWeight() method
    static PyObject * staticCallback_setWeight (PyObject *self, PyObject *args);
    /// implementer for the setWeight() method
    PyObject*  setWeight(PyObject *args);
    /// callback for the setWeightCol() method
    static PyObject * staticCallback_setWeightCol (PyObject *self, PyObject *args);
    /// implementer for the setWeightCol() method
    PyObject*  setWeightCol(PyObject *args);
    /// callback for the setWeightRow() method
    static PyObject * staticCallback_setWeightRow (PyObject *self, PyObject *args);
    /// implementer for the setWeightRow() method
    PyObject*  setWeightRow(PyObject *args);
    /// callback for the getWeight() method
    static PyObject * staticCallback_getWeight (PyObject *self, PyObject *args);
    /// implementer for the getWeight() method
    PyObject*  getWeight(PyObject *args);
    /// callback for the getWeights() method
    static PyObject * staticCallback_getWeights (PyObject *self, PyObject *args);
    /// implementer for the getWeights() method
    PyObject*  getWeights(PyObject *args);
    /// callback for the getResolution() method
    static PyObject * staticCallback_getResolution (PyObject *self, PyObject *args);
    /// implementer for the getResolution() method
    PyObject*  getResolution(PyObject *args);
    /// callback for the exchangeUV() method
    static PyObject * staticCallback_exchangeUV (PyObject *self, PyObject *args);
    /// implementer for the exchangeUV() method
    PyObject*  exchangeUV(PyObject *args);
    /// callback for the uIso() method
    static PyObject * staticCallback_uIso (PyObject *self, PyObject *args);
    /// implementer for the uIso() method
    PyObject*  uIso(PyObject *args);
    /// callback for the vIso() method
    static PyObject * staticCallback_vIso (PyObject *self, PyObject *args);
    /// implementer for the vIso() method
    PyObject*  vIso(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the UDegree attribute
    static PyObject * staticCallback_getUDegree (PyObject *self, void *closure);
    /// getter for the UDegree attribute
    Py::Int getUDegree(void) const;
    /// setter callback for the UDegree attribute
    static int staticCallback_setUDegree (PyObject *self, PyObject *value, void *closure);
    // no setter method,  UDegree is read only!
    ///getter callback for the VDegree attribute
    static PyObject * staticCallback_getVDegree (PyObject *self, void *closure);
    /// getter for the VDegree attribute
    Py::Int getVDegree(void) const;
    /// setter callback for the VDegree attribute
    static int staticCallback_setVDegree (PyObject *self, PyObject *value, void *closure);
    // no setter method,  VDegree is read only!
    ///getter callback for the MaxDegree attribute
    static PyObject * staticCallback_getMaxDegree (PyObject *self, void *closure);
    /// getter for the MaxDegree attribute
    Py::Int getMaxDegree(void) const;
    /// setter callback for the MaxDegree attribute
    static int staticCallback_setMaxDegree (PyObject *self, PyObject *value, void *closure);
    // no setter method,  MaxDegree is read only!
    ///getter callback for the NbUPoles attribute
    static PyObject * staticCallback_getNbUPoles (PyObject *self, void *closure);
    /// getter for the NbUPoles attribute
    Py::Int getNbUPoles(void) const;
    /// setter callback for the NbUPoles attribute
    static int staticCallback_setNbUPoles (PyObject *self, PyObject *value, void *closure);
    // no setter method,  NbUPoles is read only!
    ///getter callback for the NbVPoles attribute
    static PyObject * staticCallback_getNbVPoles (PyObject *self, void *closure);
    /// getter for the NbVPoles attribute
    Py::Int getNbVPoles(void) const;
    /// setter callback for the NbVPoles attribute
    static int staticCallback_setNbVPoles (PyObject *self, PyObject *value, void *closure);
    // no setter method,  NbVPoles is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    GeomBezierSurface *getGeomBezierSurfacePtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Part

#endif  // PART_BEZIERSURFACEPY_H

