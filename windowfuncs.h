#ifndef WINDOWFUNCS_H
#define WINDOWFUNCS_H

#include <QObject>
#include <QQuickView>
#include <QCursor>

class WindowFuncs : public QObject
{
	Q_OBJECT
public:
	explicit WindowFuncs(QCursor *cursor, QQuickWindow *window, QObject *parent = 0);

public slots:
	void beginMoveWindow(int x, int y, int width, int height);
	void moveWindow(int x, int y);
	void minimizeWindow();
	void closeWindow();

private:
	QQuickWindow *window;
	QCursor *cursor;
	QPoint lastPos, dragDist;
	QRect lastGeometry;
};

#endif // WINDOWFUNCS_H