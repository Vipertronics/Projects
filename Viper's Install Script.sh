#!/bin/bash

dnf update -y

dnf install corectrl boxes rawtherapee fastfetch cool-retro-term gimp gcc -y

flatpak install flathub com.mojang.Minecraft flathub com.valvesoftware.Steam flathub net.lutris.Lutris flathub net.davidotek.pupgui2 flathub com.visualstudio.code flathub org.videolan.VLC flathub io.gitlab.librewolf-community flathub org.kde.krita flathub com.discordapp.Discord flathub io.mrarm.mcpelauncher -y

hostnamectl set-hostname "Survivor"

dnf swap ffmpeg-free ffmpeg --allowerasing -y

dnf update @multimedia --setopt="install_weak_deps=False" --exclude=PackageKit-gstreamer-plugin -y









echo Install Script Complete! hopefully without problems.
