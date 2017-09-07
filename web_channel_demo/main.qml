import Ho0 1.0

import QtQuick 2.3
import QtQuick.Window 2.2
import QtWebEngine 1.2
import QtWebChannel 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Simple WebChannel WebEngineView Demo")
    color : "beige"

    WebEngineView {
        id : web_view
        anchors.fill:  parent
        url : "qrc:///index.html"
        webChannel:  web_channel
    }

    WebChannel {
        id : web_channel
    }

    Bar {
        id : bar
    }

    Component.onCompleted:  {
        web_channel.registerObject("jsBar", bar);
    }
}
