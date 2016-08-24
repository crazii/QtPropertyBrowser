/********************************************************************
	created:	2016/08/22
	filename: 	qteditslider.h
	author:		Crazii
	
	purpose:	
*********************************************************************/
#ifndef QTEDITSLIDER_H
#define QTEDITSLIDER_H

#include "qtpropertybrowser.h"
#include "qteditorfactory.h"

/************************************************************************/
/*                                                                      */
/************************************************************************/
class QtDoubleEditSliderFactoryPrivate;

class QtDoubleEditSliderFactory : public QtAbstractEditorFactory<QtDoublePropertyManager>
{
public:
	Q_OBJECT
public:
	QtDoubleEditSliderFactory(QObject *parent = Q_NULLPTR);
	~QtDoubleEditSliderFactory();
public:

	void connectPropertyManager(QtDoublePropertyManager *manager);
	QWidget *createEditor(QtDoublePropertyManager *manager, QtProperty *property,
		QWidget *parent);
	void disconnectPropertyManager(QtDoublePropertyManager *manager);
private:
	QtDoubleEditSliderFactoryPrivate *d_ptr;
	Q_DECLARE_PRIVATE(QtDoubleEditSliderFactory)
		Q_DISABLE_COPY(QtDoubleEditSliderFactory)
		Q_PRIVATE_SLOT(d_func(), void slotPropertyChanged(QtProperty *, double))
		Q_PRIVATE_SLOT(d_func(), void slotRangeChanged(QtProperty *, double, double))
		Q_PRIVATE_SLOT(d_func(), void slotSingleStepChanged(QtProperty *, double))
		Q_PRIVATE_SLOT(d_func(), void slotDecimalsChanged(QtProperty *, int))
		Q_PRIVATE_SLOT(d_func(), void slotReadOnlyChanged(QtProperty *, bool))
		Q_PRIVATE_SLOT(d_func(), void slotSetValue(double))
		Q_PRIVATE_SLOT(d_func(), void slotEditorDestroyed(QObject *))
};


/************************************************************************/
/*                                                                      */
/************************************************************************/
class QtIntEditSliderFactoryPrivate;

class QtIntEditSliderFactory : public QtAbstractEditorFactory<QtIntPropertyManager>
{
public:
	Q_OBJECT
public:
	QtIntEditSliderFactory(QObject *parent = Q_NULLPTR);
	~QtIntEditSliderFactory();
public:

	void connectPropertyManager(QtIntPropertyManager *manager);
	QWidget *createEditor(QtIntPropertyManager *manager, QtProperty *property,
		QWidget *parent);
	void disconnectPropertyManager(QtIntPropertyManager *manager);
private:
	QtIntEditSliderFactoryPrivate *d_ptr;
	Q_DECLARE_PRIVATE(QtIntEditSliderFactory)
		Q_DISABLE_COPY(QtIntEditSliderFactory)
		Q_PRIVATE_SLOT(d_func(), void slotPropertyChanged(QtProperty *, int))
		Q_PRIVATE_SLOT(d_func(), void slotRangeChanged(QtProperty *, int, int))
		Q_PRIVATE_SLOT(d_func(), void slotSingleStepChanged(QtProperty *, int))
		Q_PRIVATE_SLOT(d_func(), void slotReadOnlyChanged(QtProperty *, bool))
		Q_PRIVATE_SLOT(d_func(), void slotSetValue(int))
		Q_PRIVATE_SLOT(d_func(), void slotEditorDestroyed(QObject *))
};

/************************************************************************/
/*                                                                      */
/************************************************************************/
class QtEnumSliderFactoryPrivate;

class QtEnumSliderFactory : public QtAbstractEditorFactory<QtEnumPropertyManager>
{
public:
	Q_OBJECT
public:
	QtEnumSliderFactory(QObject *parent = Q_NULLPTR);
	~QtEnumSliderFactory();
protected:
	void connectPropertyManager(QtEnumPropertyManager *manager);
	QWidget *createEditor(QtEnumPropertyManager *manager, QtProperty *property,
		QWidget *parent);
	void disconnectPropertyManager(QtEnumPropertyManager *manager);
private:
	QtEnumSliderFactoryPrivate *d_ptr;
	Q_DECLARE_PRIVATE(QtEnumSliderFactory)
		Q_DISABLE_COPY(QtEnumSliderFactory)
		Q_PRIVATE_SLOT(d_func(), void slotPropertyChanged(QtProperty *, int))
		Q_PRIVATE_SLOT(d_func(), void slotEnumNamesChanged(QtProperty *,
			const QStringList &))
		Q_PRIVATE_SLOT(d_func(), void slotEnumIconsChanged(QtProperty *,
			const QMap<int, QIcon> &))
		Q_PRIVATE_SLOT(d_func(), void slotSetValue(int))
		Q_PRIVATE_SLOT(d_func(), void slotEditorDestroyed(QObject *))
};



#endif // QTEDITSLIDER_H