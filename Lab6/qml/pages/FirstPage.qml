import QtQuick 2.0
import Sailfish.Silica 1.0

Page {
    id: page
    allowedOrientations: Orientation.All

    SilicaFlickable {
        anchors.fill: parent

        Column {
            id: column
            width: page.width
            spacing: Theme.paddingLarge

            Button {
                text: "Task1"
                width: parent.width
                onClicked: pageStack.push(Qt.resolvedUrl("Task1.qml"))
            }

            Button {
                text: "Task2"
                width: parent.width
                onClicked: pageStack.push(Qt.resolvedUrl("Task2.qml"))
            }

        }
    }
}
