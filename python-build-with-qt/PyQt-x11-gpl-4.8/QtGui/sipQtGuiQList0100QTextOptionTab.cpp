/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:15 2012
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

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 39 "sipQtGuiQList0100QTextOptionTab.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 107 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 45 "sipQtGuiQList0100QTextOptionTab.cpp"


extern "C" {static void assign_QList_0100QTextOption_Tab(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QTextOption_Tab(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QTextOption::Tab> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QTextOption::Tab> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QTextOption_Tab(SIP_SSIZE_T);}
static void *array_QList_0100QTextOption_Tab(SIP_SSIZE_T sipNrElem)
{
    return new QList<QTextOption::Tab>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QTextOption_Tab(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QTextOption_Tab(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QTextOption::Tab>(reinterpret_cast<const QList<QTextOption::Tab> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QTextOption_Tab(void *, int);}
static void release_QList_0100QTextOption_Tab(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QTextOption::Tab> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QTextOption_Tab(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QTextOption_Tab(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QTextOption::Tab> **sipCppPtr = reinterpret_cast<QList<QTextOption::Tab> **>(sipCppPtrV);

#line 69 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QTextOption_Tab, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QTextOption::Tab> *ql = new QList<QTextOption::Tab>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QTextOption::Tab *t = reinterpret_cast<QTextOption::Tab *>(sipConvertToType(itm, sipType_QTextOption_Tab, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QTextOption_Tab, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QTextOption_Tab, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 135 "sipQtGuiQList0100QTextOptionTab.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QTextOption_Tab(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QTextOption_Tab(void *sipCppV,PyObject *sipTransferObj)
{
   QList<QTextOption::Tab> *sipCpp = reinterpret_cast<QList<QTextOption::Tab> *>(sipCppV);

#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QTextOption::Tab *t = new QTextOption::Tab(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QTextOption_Tab, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 169 "sipQtGuiQList0100QTextOptionTab.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0100QTextOption_Tab = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_16985,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QTextOption_Tab,
    array_QList_0100QTextOption_Tab,
    copy_QList_0100QTextOption_Tab,
    release_QList_0100QTextOption_Tab,
    convertTo_QList_0100QTextOption_Tab,
    convertFrom_QList_0100QTextOption_Tab
};
