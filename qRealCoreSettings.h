/* Copyright  2016 Guzel Garifullina
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. */

#pragma once

#include <QtCore/qglobal.h>
#include <QObject>

#include <QSettings>

class qRealCoreSettings: public QObject
{
	Q_OBJECT
public:
	qRealCoreSettings();
	~qRealCoreSettings();

	//change qreal plugin settings
	void saveToSettings() const;

	//load default settings on first startup
	//plugin and system
	void loadDefaultSettings();
private:
	QSettings *settings;
	bool isFirtTimeLoaded();
	void loadDefaultPluginSettings();
	void loadDefaultSystemSettings();
signals:
	void settingsChanged();
//public slots:
};


