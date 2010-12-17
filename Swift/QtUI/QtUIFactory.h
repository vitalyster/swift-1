/*
 * Copyright (c) 2010 Remko Tronçon
 * Licensed under the GNU General Public License v3.
 * See Documentation/Licenses/GPLv3.txt for more information.
 */

#pragma once

#include <QObject>

#include <Swift/Controllers/UIInterfaces/UIFactory.h>

class QSplitter;

namespace Swift {
	class QtSettingsProvider;
	class QtChatTabs;
	class QtSystemTray;
	class QtLoginWindow;
	class QtMainWindow;
	class QtChatTheme;
	class QtChatWindowFactory;

	class QtUIFactory : public QObject, public UIFactory {
			Q_OBJECT
		public:
			QtUIFactory(QtSettingsProvider* settings, QtChatTabs* tabs, QSplitter* netbookSplitter, QtSystemTray* systemTray, QtChatWindowFactory* chatWindowFactory);

			virtual XMLConsoleWidget* createXMLConsoleWidget();
			virtual MainWindow* createMainWindow(UIEventStream* eventStream);
			virtual LoginWindow* createLoginWindow(UIEventStream* eventStream);
			virtual EventWindow* createEventWindow();
			virtual ChatListWindow* createChatListWindow(UIEventStream*);
			virtual MUCSearchWindow* createMUCSearchWindow(UIEventStream* eventStream);
			virtual ChatWindow* createChatWindow(const JID &contact, UIEventStream* eventStream);

		private slots:
			void handleLoginWindowGeometryChanged();

		private:
			QtSettingsProvider* settings;
			QtChatTabs* tabs;
			QSplitter* netbookSplitter;
			QtSystemTray* systemTray;
			QtChatWindowFactory* chatWindowFactory;
			QtMainWindow* lastMainWindow;
			QtLoginWindow* loginWindow;
	};
}
