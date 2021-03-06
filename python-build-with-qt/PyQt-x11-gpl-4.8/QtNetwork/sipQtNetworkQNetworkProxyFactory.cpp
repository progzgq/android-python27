/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:29 2012
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

#include "sipAPIQtNetwork.h"

#line 152 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 39 "sipQtNetworkQNetworkProxyFactory.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 43 "sipQtNetworkQNetworkProxyFactory.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 46 "sipQtNetworkQNetworkProxyFactory.cpp"
#line 112 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 49 "sipQtNetworkQNetworkProxyFactory.cpp"


class sipQNetworkProxyFactory : public QNetworkProxyFactory
{
public:
    sipQNetworkProxyFactory();
    sipQNetworkProxyFactory(const QNetworkProxyFactory&);
    virtual ~sipQNetworkProxyFactory();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQNetworkProxyFactory(const sipQNetworkProxyFactory &);
    sipQNetworkProxyFactory &operator = (const sipQNetworkProxyFactory &);

    char sipPyMethods[1];
};

sipQNetworkProxyFactory::sipQNetworkProxyFactory(): QNetworkProxyFactory(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQNetworkProxyFactory::sipQNetworkProxyFactory(const QNetworkProxyFactory& a0): QNetworkProxyFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQNetworkProxyFactory::~sipQNetworkProxyFactory()
{
    sipCommonDtor(sipPySelf);
}

QList<QNetworkProxy> sipQNetworkProxyFactory::queryProxy(const QNetworkProxyQuery& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QNetworkProxyFactory,sipName_queryProxy);

    if (!meth)
        return QList<QNetworkProxy>();

    extern QList<QNetworkProxy> sipVH_QtNetwork_4(sip_gilstate_t,PyObject *,const QNetworkProxyQuery&);

    return sipVH_QtNetwork_4(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_QNetworkProxyFactory_queryProxy(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_queryProxy(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QNetworkProxyQuery& a0def = QNetworkProxyQuery();
        const QNetworkProxyQuery * a0 = &a0def;
        QNetworkProxyFactory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_query,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J9", &sipSelf, sipType_QNetworkProxyFactory, &sipCpp, sipType_QNetworkProxyQuery, &a0))
        {
            QList<QNetworkProxy> *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QNetworkProxyFactory, sipName_queryProxy);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkProxy>(sipCpp->queryProxy(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkProxy,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_queryProxy, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkProxyFactory_setApplicationProxyFactory(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_setApplicationProxyFactory(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyFactory * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J:", sipType_QNetworkProxyFactory, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QNetworkProxyFactory::setApplicationProxyFactory(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_setApplicationProxyFactory, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkProxyFactory_proxyForQuery(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_proxyForQuery(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QNetworkProxyQuery, &a0))
        {
            QList<QNetworkProxy> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkProxy>(QNetworkProxyFactory::proxyForQuery(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkProxy,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_proxyForQuery, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkProxyFactory_systemProxyForQuery(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_systemProxyForQuery(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery& a0def = QNetworkProxyQuery();
        const QNetworkProxyQuery * a0 = &a0def;

        static const char *sipKwdList[] = {
            sipName_query,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|J9", sipType_QNetworkProxyQuery, &a0))
        {
            QList<QNetworkProxy> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkProxy>(QNetworkProxyFactory::systemProxyForQuery(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkProxy,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_systemProxyForQuery, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkProxyFactory_setUseSystemConfiguration(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyFactory_setUseSystemConfiguration(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "b", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QNetworkProxyFactory::setUseSystemConfiguration(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyFactory, sipName_setUseSystemConfiguration, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkProxyFactory(void *, const sipTypeDef *);}
static void *cast_QNetworkProxyFactory(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkProxyFactory)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkProxyFactory(void *, int);}
static void release_QNetworkProxyFactory(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQNetworkProxyFactory *>(sipCppV);
    else
        delete reinterpret_cast<QNetworkProxyFactory *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QNetworkProxyFactory(sipSimpleWrapper *);}
static void dealloc_QNetworkProxyFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQNetworkProxyFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkProxyFactory(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QNetworkProxyFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QNetworkProxyFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQNetworkProxyFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQNetworkProxyFactory();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QNetworkProxyFactory * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkProxyFactory, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQNetworkProxyFactory(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QNetworkProxyFactory[] = {
    {SIP_MLNAME_CAST(sipName_proxyForQuery), meth_QNetworkProxyFactory_proxyForQuery, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_queryProxy), (PyCFunction)meth_QNetworkProxyFactory_queryProxy, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setApplicationProxyFactory), meth_QNetworkProxyFactory_setApplicationProxyFactory, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setUseSystemConfiguration), meth_QNetworkProxyFactory_setUseSystemConfiguration, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_systemProxyForQuery), (PyCFunction)meth_QNetworkProxyFactory_systemProxyForQuery, METH_VARARGS|METH_KEYWORDS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkProxyFactory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QNetworkProxyFactory,
        {0}
    },
    {
        sipNameNr_QNetworkProxyFactory,
        {0, 0, 1},
        5, methods_QNetworkProxyFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_QNetworkProxyFactory,
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
    dealloc_QNetworkProxyFactory,
    0,
    0,
    0,
    release_QNetworkProxyFactory,
    cast_QNetworkProxyFactory,
    0,
    0,
    0
},
    0,
    0,
    0
};
