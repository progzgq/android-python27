/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:00 2012
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

#include "sipAPIQtXmlPatterns.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 39 "sipQtXmlPatternsQXmlName.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlnamepool.sip"
#include <qxmlnamepool.h>
#line 43 "sipQtXmlPatternsQXmlName.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtXmlPatternsQXmlName.cpp"


extern "C" {static PyObject *meth_QXmlName_namespaceUri(PyObject *, PyObject *);}
static PyObject *meth_QXmlName_namespaceUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNamePool * a0;
        QXmlName *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlName, &sipCpp, sipType_QXmlNamePool, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->namespaceUri(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlName, sipName_namespaceUri, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlName_prefix(PyObject *, PyObject *);}
static PyObject *meth_QXmlName_prefix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNamePool * a0;
        QXmlName *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlName, &sipCpp, sipType_QXmlNamePool, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->prefix(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlName, sipName_prefix, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlName_localName(PyObject *, PyObject *);}
static PyObject *meth_QXmlName_localName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNamePool * a0;
        QXmlName *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlName, &sipCpp, sipType_QXmlNamePool, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->localName(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlName, sipName_localName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlName_toClarkName(PyObject *, PyObject *);}
static PyObject *meth_QXmlName_toClarkName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNamePool * a0;
        QXmlName *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlName, &sipCpp, sipType_QXmlNamePool, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toClarkName(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlName, sipName_toClarkName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlName_isNull(PyObject *, PyObject *);}
static PyObject *meth_QXmlName_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlName *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlName, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlName, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlName_isNCName(PyObject *, PyObject *);}
static PyObject *meth_QXmlName_isNCName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QXmlName::isNCName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlName, sipName_isNCName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlName_fromClarkName(PyObject *, PyObject *);}
static PyObject *meth_QXmlName_fromClarkName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QXmlNamePool * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J9", sipType_QString,&a0, &a0State, sipType_QXmlNamePool, &a1))
        {
            QXmlName *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlName(QXmlName::fromClarkName(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QXmlName,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlName, sipName_fromClarkName, NULL);

    return NULL;
}


extern "C" {static long slot_QXmlName___hash__(PyObject *);}
static long slot_QXmlName___hash__(PyObject *sipSelf)
{
    QXmlName *sipCpp = reinterpret_cast<QXmlName *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlName));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 57 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlname.sip"
        sipRes = qHash(*sipCpp);
#line 262 "sipQtXmlPatternsQXmlName.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QXmlName___ne__(PyObject *,PyObject *);}
static PyObject *slot_QXmlName___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlName *sipCpp = reinterpret_cast<QXmlName *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlName));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlName * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlName, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QXmlName::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXmlPatterns,ne_slot,sipType_QXmlName,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QXmlName___eq__(PyObject *,PyObject *);}
static PyObject *slot_QXmlName___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlName *sipCpp = reinterpret_cast<QXmlName *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlName));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlName * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlName, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QXmlName::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXmlPatterns,eq_slot,sipType_QXmlName,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlName(void *, const sipTypeDef *);}
static void *cast_QXmlName(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlName)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlName(void *, int);}
static void release_QXmlName(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QXmlName *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QXmlName(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlName(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlName *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlName *>(sipSrc);
}


extern "C" {static void *array_QXmlName(SIP_SSIZE_T);}
static void *array_QXmlName(SIP_SSIZE_T sipNrElem)
{
    return new QXmlName[sipNrElem];
}


extern "C" {static void *copy_QXmlName(const void *, SIP_SSIZE_T);}
static void *copy_QXmlName(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlName(reinterpret_cast<const QXmlName *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlName(sipSimpleWrapper *);}
static void dealloc_QXmlName(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlName(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QXmlName(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QXmlName(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlName *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlName();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QXmlNamePool * a0;
        const QString * a1;
        int a1State = 0;
        const QString& a2def = QString();
        const QString * a2 = &a2def;
        int a2State = 0;
        const QString& a3def = QString();
        const QString * a3 = &a3def;
        int a3State = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_namespaceUri,
            sipName_prefix,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J1|J1J1", sipType_QXmlNamePool, &a0, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlName(*a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);

            return sipCpp;
        }
    }

    {
        const QXmlName * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlName, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlName(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QXmlName[] = {
    {(void *)slot_QXmlName___hash__, hash_slot},
    {(void *)slot_QXmlName___ne__, ne_slot},
    {(void *)slot_QXmlName___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QXmlName[] = {
    {SIP_MLNAME_CAST(sipName_fromClarkName), meth_QXmlName_fromClarkName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNCName), meth_QXmlName_isNCName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QXmlName_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_localName), meth_QXmlName_localName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_namespaceUri), meth_QXmlName_namespaceUri, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_prefix), meth_QXmlName_prefix, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toClarkName), meth_QXmlName_toClarkName, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlName = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlName,
        {0}
    },
    {
        sipNameNr_QXmlName,
        {0, 0, 1},
        7, methods_QXmlName,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QXmlName,
    init_QXmlName,
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
    dealloc_QXmlName,
    assign_QXmlName,
    array_QXmlName,
    copy_QXmlName,
    release_QXmlName,
    cast_QXmlName,
    0,
    0,
    0
},
    0,
    0,
    0
};
