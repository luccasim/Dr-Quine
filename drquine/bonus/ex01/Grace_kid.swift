import Foundation

let t = "\"import Foundation\\n\\nlet t = \" + t.debugDescription + \"\\nlet text = \" + t + \"\\nlet dir = FileManager.default.currentDirectoryPath + \\\"/Grace_kid.swift\\\"\\ntry! text.write(toFile: dir, atomically: false, encoding: String.Encoding.utf8)\""
let text = "import Foundation\n\nlet t = " + t.debugDescription + "\nlet text = " + t + "\nlet dir = FileManager.default.currentDirectoryPath + \"/Grace_kid.swift\"\ntry! text.write(toFile: dir, atomically: false, encoding: String.Encoding.utf8)"
let dir = FileManager.default.currentDirectoryPath + "/Grace_kid.swift"
try! text.write(toFile: dir, atomically: false, encoding: String.Encoding.utf8)