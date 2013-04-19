/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
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

#include "sipAPIQtGui.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicsanchorlayout.sip"
#include <qgraphicsanchorlayout.h>
#line 39 "sipQtGuiQGraphicsAnchor.cpp"

#line 59 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicsanchorlayout.sip"
#include <qgraphicsanchorlayout.h>
#line 43 "sipQtGuiQGraphicsAnchor.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 46 "sipQtGuiQGraphicsAnchor.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtGuiQGraphicsAnchor.cpp"
#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtGuiQGraphicsAnchor.cpp"
#line 303 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtGuiQGraphicsAnchor.cpp"
#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 58 "sipQtGuiQGraphicsAnchor.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 61 "sipQtGuiQGraphicsAnchor.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 64 "sipQtGuiQGraphicsAnchor.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 67 "sipQtGuiQGraphicsAnchor.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 70 "sipQtGuiQGraphicsAnchor.cpp"
#line 125 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 73 "sipQtGuiQGraphicsAnchor.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 76 "sipQtGuiQGraphicsAnchor.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 79 "sipQtGuiQGraphicsAnchor.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 82 "sipQtGuiQGraphicsAnchor.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 85 "sipQtGuiQGraphicsAnchor.cpp"


extern "C" {static PyObject *meth_QGraphicsAnchor_setSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_setSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsAnchor, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSpacing(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_setSpacing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsAnchor_unsetSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_unsetSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchor, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unsetSpacing();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_unsetSpacing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsAnchor_spacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_spacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchor, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->spacing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_spacing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsAnchor_setSizePolicy(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_setSizePolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::Policy a0;
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsAnchor, &sipCpp, sipType_QSizePolicy_Policy, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSizePolicy(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_setSizePolicy, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsAnchor_sizePolicy(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_sizePolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchor, &sipCpp))
        {
            QSizePolicy::Policy sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sizePolicy();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_Policy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_sizePolicy, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsAnchor(void *, const sipTypeDef *);}
static void *cast_QGraphicsAnchor(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsAnchor)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QGraphicsAnchor *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsAnchor(void *, int);}
static void release_QGraphicsAnchor(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsAnchor *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsAnchor(sipSimpleWrapper *);}
static void dealloc_QGraphicsAnchor(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsAnchor(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsAnchor[] = {{133, 0, 1}};


static PyMethodDef methods_QGraphicsAnchor[] = {
    {SIP_MLNAME_CAST(sipName_setSizePolicy), meth_QGraphicsAnchor_setSizePolicy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setSpacing), meth_QGraphicsAnchor_setSpacing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sizePolicy), meth_QGraphicsAnchor_sizePolicy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_spacing), meth_QGraphicsAnchor_spacing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_unsetSpacing), meth_QGraphicsAnchor_unsetSpacing, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsAnchor = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsAnchor,
        {0}
    },
    {
        sipNameNr_QGraphicsAnchor,
        {0, 0, 1},
        5, methods_QGraphicsAnchor,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsAnchor,
    0,
    0,
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
    dealloc_QGraphicsAnchor,
    0,
    0,
    0,
    release_QGraphicsAnchor,
    cast_QGraphicsAnchor,
    0,
    0,
    0
},
    &QGraphicsAnchor::staticMetaObject,
    0,
    0
};