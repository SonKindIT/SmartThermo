import QtQuick 2.15

Rectangle{
    id:mainBackground
    signal destroyMe()
    anchors.fill: parent
    color: "transparent"

    MouseArea{
        anchors.fill: parent
        onClicked: mainBackground.destroyMe()
    }

    Rectangle{
        id:innerRectangle
        width:parent.width/3
        height: parent.height*2/3
        anchors.centerIn: parent
        color:"black"
        border.color: "white"
        border.width: 3

        ListModel{
            id:heatListModel
            ListElement{controlText: "Heating"}
            ListElement{controlText:"Cooling"}
            ListElement{controlText:"Auto"}
        }

        ListView{
            id:heatListView
            anchors.fill: parent
            model: heatListModel
            delegate: Rectangle{
                width:innerRectangle.width
                height: innerRectangle.height/3
                color:"black"
                border.color: "white"
                border.width: 3
                radius: 4
                Text{
                    anchors.centerIn: parent
                    color:"white"
                    font.pixelSize: 42
                    text: controlText
                }

                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        if(controlText == "Heating")
                            systemController.setSystemState(0)
                        else if(controlText == "Cooling")
                            systemController.setSystemState(1)
                        else
                            systemController.setSystemState(2)

                        mainBackground.destroyMe()
                    }

                }
            }
        }
    }
}

