import QtQuick 2.15
import QtQuick.Controls

Item {
    Rectangle{
        id:homeScreen

        property var heatSelectDialogHolder: null

        function createHeatDialog(){
            if(heatSelectDialogHolder === null){
                var compopent = Qt.createComponent("SelectionDialog.qml")
                heatSelectDialogHolder = compopent.createObject(homeScreen,{"x":0,"y":0})

                if(heatSelectDialogHolder){
                    heatSelectDialogHolder.anchors.fill = homeScreen
                    heatSelectDialogHolder.destroyMe.connect(destroyHeatDialog)
                }
            }
        }

        function destroyHeatDialog(){
            if(heatSelectDialogHolder !== null){
                heatSelectDialogHolder.destroy()
                heatSelectDialogHolder = null
            }
        }

        anchors.fill: parent
        color:"#000000"
        Text {
            id: temp
            text: systemController.currentSystemTemp
            font{
                bold:true
                family: "Arial"
                pointSize: 80
            }
            color:"#ffffff"
            anchors.centerIn: parent
        }

        Text {
            id: statusTemp
            text: systemController.messageStatusSystem
            font{
                bold:true
                family: "Arial"
                pointSize: 30
            }
            color:"#ffffff"
            anchors{
                horizontalCenter: parent.horizontalCenter
                top: temp.bottom
                topMargin: 20

            }

        }

        Slider {
            id: control
            orientation: Qt.Vertical
            value: systemController.targetSystemTemp
            onValueChanged: systemController.setTargetSystemTemp(value)
            width: 26
            height: 300
            from:55
            to:85



            background: Rectangle {
                x: control.width / 2 - width / 2
                y: control.topPadding
                implicitWidth: 4
                implicitHeight: 200
                width: implicitWidth
                height: control.availableHeight
                radius: 2
                color: "#bdbebf"

                Rectangle {
                    width: parent.width
                    height: (1-control.visualPosition) * parent.height
                    y: parent.height - height
                    color: "#21be2b"
                    radius: 2
                }
            }

            handle: Rectangle {
                x: control.width / 2 - width / 2
                y: control.topPadding + control.visualPosition * (control.availableHeight - height)
                implicitWidth: 40
                implicitHeight: 40
                radius: 20
                color: "#000000"
                border.color: "#ffffff"
                Text {
                    id: sliderTemp
                    text: systemController.targetSystemTemp
                    font{
                        family: "Arial"
                        pointSize: 18
                    }
                    color:"#ffffff"
                    anchors.centerIn: parent
                }
            }

            anchors{
                verticalCenter: parent.verticalCenter
                left: temp.right
                leftMargin: 100
            }
        }

        Image {
            id: heatCoolSelection
            source: {
                if(systemController.systemState === 0)
                    return  "qrc:/ui/Assest/flame.png"
                if(systemController.systemState === 1)
                    return  "qrc:/ui/Assest/ice-crystal.png"
                if(systemController.systemState === 2)
                    return  "qrc:/ui/Assest/auto.png"
            }

            anchors{
                top:parent.top
                left:parent.left
                topMargin: 40
                leftMargin: 40
            }
            width: 70
            height:70

            MouseArea{
                anchors.fill: parent
                onClicked: homeScreen.createHeatDialog()
            }
        }


        Image {
            id: setting
            source: "qrc:/ui/Assest/settings.png"

            anchors{
                bottom:parent.bottom
                left:parent.left
                bottomMargin: 40
                leftMargin: 40
            }
            width: 50
            height:50
        }
    }
}


