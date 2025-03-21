# CommandGPT
CommandGPT is a lightweight command-line ChatGPT client with no cost and no rate limits.

# Build Instructions
A batch file (build.bat) is provided in this repository's root, so you can just run it to build CommandGPT. The compiled executable will be placed in the `distributable` folder. MinGW must be installed on your system to build it.

Alternatively, you can download an already compiled executable from the Releases page.

# Usage
To use CommandGPT, type its executable name followed by the name of the AI model you want to talk to (case-insensitive).

Currently, the supported AI models are:

- GPT-3.5-Turbo
- GPT-4
- GPT-4o-Mini
- GPT-4o
- o1-mini
- o1
- o1-pro
- o3-mini

As an example, if you want to talk to o1-pro, you would type: `commandgpt.exe o1-pro`

After you type the command, assuming you provided the name of a supported AI model, you will be connected to that model and can then send it a message.

# Limitations
Currently, you can only send messages that are single-line, not multi-line, but you can emulate a multi-line message using the `\n` character (it creates a new line internally even though you can't see it). You can also only send messages that are up to 400 characters long. Image input is not yet supported, and neither is image generation. Ditto for audio, video, or any other type of file input/generation.

ChatGPT's response also does not appear properly formatted (i.e., no bold or italics) and is displayed as plain text in the terminal. However, its messages, unlike the user's, can visually span multiple lines.

Do note that I will be fixing these limitations in due time.

# License
Much like most of my other programs, CommandGPT is licensed under the MIT license.
