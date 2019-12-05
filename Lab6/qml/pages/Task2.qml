import QtQuick 2.0
import Sailfish.Silica 1.0
import com.lab6.StringList 1.0

Page {
    id: page
    allowedOrientations: Orientation.All

    StringList { id: stringList }

    SilicaFlickable {
        anchors.fill: parent

        Column {
            id: column
            width: page.width
            spacing: Theme.paddingLarge
            anchors.horizontalCenter: parent.horizontalCenter

            TextInput {
                id: textInput
                width: parent.width
                text: "Input here"
            }

            Button {
                id: insertBtn
                text: "Insert"
                onClicked: stringList.add(textInput.text)
            }

            Button {
                id: deleteLastBtn
                text: "DeleteLast"
                onClicked: stringList.deleteLast()
            }

            Label {
                id: formattedListLabel
                width: parent.width
                Text {
                    width: parent.width
                    text: stringList.formatted
                    wrapMode: Text.WordWrap
                }
            }

        }

    }

}
