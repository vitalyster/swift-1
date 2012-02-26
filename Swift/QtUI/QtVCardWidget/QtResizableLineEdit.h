/*
 * Copyright (c) 2012 Tobias Markmann
 * Licensed under the simplified BSD license.
 * See Documentation/Licenses/BSD-simplified.txt for more information.
 */

#pragma once

#include <QLineEdit>

namespace Swift {

	class QtResizableLineEdit : public QLineEdit {
		Q_OBJECT
		Q_PROPERTY(bool editable READ isEditable WRITE setEditable)

		public:
			explicit QtResizableLineEdit(QWidget* parent = 0);
			~QtResizableLineEdit();

			bool isEditable() const;
			void setEditable(const bool);

			virtual QSize sizeHint() const;

		private slots:
			void textChanged(QString);

		private:
			bool editable;
	};

}
