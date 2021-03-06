/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:36 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtOpenGL.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtOpenGL/qglcolormap.sip"
#include <qglcolormap.h>
#line 39 "sipQtOpenGLQGLColormap.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 43 "sipQtOpenGLQGLColormap.cpp"


class sipQGLColormap : public QGLColormap
{
public:
    sipQGLColormap();
    sipQGLColormap(const QGLColormap&);
    ~sipQGLColormap();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    Qt::HANDLE sipProtect_handle();
    void sipProtect_setHandle(Qt::HANDLE);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGLColormap(const sipQGLColormap &);
    sipQGLColormap &operator = (const sipQGLColormap &);
};

sipQGLColormap::sipQGLColormap(): QGLColormap(), sipPySelf(0)
{
}

sipQGLColormap::sipQGLColormap(const QGLColormap& a0): QGLColormap(a0), sipPySelf(0)
{
}

sipQGLColormap::~sipQGLColormap()
{
    sipCommonDtor(sipPySelf);
}

Qt::HANDLE sipQGLColormap::sipProtect_handle()
{
    return QGLColormap::handle();
}

void sipQGLColormap::sipProtect_setHandle(Qt::HANDLE a0)
{
    QGLColormap::setHandle(a0);
}


extern "C" {static PyObject *meth_QGLColormap_detach(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_detach(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLColormap, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->detach();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_detach, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLColormap, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_isEmpty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_size(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLColormap, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_size, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_setEntries(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_setEntries(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        int a1 = 0;
        QGLColormap *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colors,
            sipName_base,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BT|i", &sipSelf, sipType_QGLColormap, &sipCpp, &PyList_Type, &a0, &a1))
        {
#line 48 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtOpenGL/qglcolormap.sip"
        // The Python implementation takes a list of numbers.
        QRgb *colours = new QRgb[PyList_GET_SIZE(a0)];
        
        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(a0); ++i)
            colours[i] = PyLong_AsUnsignedLong(PyList_GET_ITEM(a0, i));
        
        sipCpp->setEntries(PyList_GET_SIZE(a0), colours, a1);
        
        delete[] colours;
#line 199 "sipQtOpenGLQGLColormap.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_setEntries, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_setEntry(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_setEntry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QRgb a1;
        QGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Biu", &sipSelf, sipType_QGLColormap, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setEntry(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        const QColor * a1;
        int a1State = 0;
        QGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ1", &sipSelf, sipType_QGLColormap, &sipCpp, &a0, sipType_QColor, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setEntry(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QColor *>(a1),sipType_QColor,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_setEntry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_entryRgb(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_entryRgb(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGLColormap, &sipCpp, &a0))
        {
            QRgb sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->entryRgb(a0);
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_entryRgb, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_entryColor(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_entryColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGLColormap, &sipCpp, &a0))
        {
            QColor *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QColor(sipCpp->entryColor(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_entryColor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_find(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRgb a0;
        QGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QGLColormap, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->find(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_find, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_findNearest(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_findNearest(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRgb a0;
        QGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QGLColormap, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->findNearest(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_findNearest, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_handle(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLColormap, &sipCpp))
        {
            Qt::HANDLE sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtect_handle();
            Py_END_ALLOW_THREADS

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_handle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGLColormap_setHandle(PyObject *, PyObject *);}
static PyObject *meth_QGLColormap_setHandle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::HANDLE a0;
        sipQGLColormap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bv", &sipSelf, sipType_QGLColormap, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_setHandle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLColormap, sipName_setHandle, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGLColormap(void *, const sipTypeDef *);}
static void *cast_QGLColormap(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGLColormap)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGLColormap(void *, int);}
static void release_QGLColormap(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGLColormap *>(sipCppV);
    else
        delete reinterpret_cast<QGLColormap *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGLColormap(void *, SIP_SSIZE_T, const void *);}
static void assign_QGLColormap(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGLColormap *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGLColormap *>(sipSrc);
}


extern "C" {static void *array_QGLColormap(SIP_SSIZE_T);}
static void *array_QGLColormap(SIP_SSIZE_T sipNrElem)
{
    return new QGLColormap[sipNrElem];
}


extern "C" {static void *copy_QGLColormap(const void *, SIP_SSIZE_T);}
static void *copy_QGLColormap(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGLColormap(reinterpret_cast<const QGLColormap *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGLColormap(sipSimpleWrapper *);}
static void dealloc_QGLColormap(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGLColormap *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGLColormap(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QGLColormap(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QGLColormap(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGLColormap *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLColormap();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QGLColormap * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGLColormap, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLColormap(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QGLColormap[] = {
    {SIP_MLNAME_CAST(sipName_detach), meth_QGLColormap_detach, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_entryColor), meth_QGLColormap_entryColor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_entryRgb), meth_QGLColormap_entryRgb, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_find), meth_QGLColormap_find, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_findNearest), meth_QGLColormap_findNearest, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_handle), meth_QGLColormap_handle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QGLColormap_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setEntries), (PyCFunction)meth_QGLColormap_setEntries, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setEntry), meth_QGLColormap_setEntry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setHandle), meth_QGLColormap_setHandle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QGLColormap_size, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGLColormap = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGLColormap,
        {0}
    },
    {
        sipNameNr_QGLColormap,
        {0, 0, 1},
        11, methods_QGLColormap,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QGLColormap,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QGLColormap,
    assign_QGLColormap,
    array_QGLColormap,
    copy_QGLColormap,
    release_QGLColormap,
    cast_QGLColormap,
    0,
    0,
    0
},
    0,
    0,
    0
};
