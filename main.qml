import QtQuick 2.15
import QtQuick.Window 2.15
import Monty 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    SystemController{
        id:systemController
    }

    Loader{
        id:mainLoader
        anchors.fill: parent
        source: "./ui/HomeScreen/HomeScreen.qml"
    }
}
