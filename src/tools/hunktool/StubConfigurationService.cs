﻿#region License
/* 
 * Copyright (C) 1999-2018 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Core.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Reko.Core;
using Reko.Core.Assemblers;
using Reko.Arch.M68k;
using Reko.Environments.AmigaOS;

namespace hunktool
{
    public class StubConfigurationService : IConfigurationService
    {
        public IProcessorArchitecture GetArchitecture(string archLabel)
        {
            if (archLabel == "m68k")
                return new M68kArchitecture("m68k");
            throw new NotImplementedException();
        }

        public ICollection<Architecture> GetArchitectures()
        {
            throw new NotImplementedException();
        }

        public Assembler GetAssembler(string assemblerName)
        {
            throw new NotImplementedException();
        }

        public ICollection<AssemblerElement> GetAssemblers()
        {
            throw new NotImplementedException();
        }

        public IEnumerable<UiStyle> GetDefaultPreferences()
        {
            throw new NotImplementedException();
        }

        public OperatingEnvironment GetEnvironment(string envName)
        {
            if (envName == "amigaOS")
            {
                return new OperatingEnvironmentElement
                {
                     TypeName = typeof(AmigaOSPlatform).AssemblyQualifiedName,
                };
            }
            throw new NotImplementedException();
        }

        public ICollection<OperatingEnvironment> GetEnvironments()
        {
            throw new NotImplementedException();
        }

        public ICollection<LoaderConfiguration> GetImageLoaders()
        {
            throw new NotImplementedException();
        }

        public string GetInstallationRelativePath(params string[] pathComponents)
        {
            throw new NotImplementedException();
        }

        public RawFileElement GetRawFile(string rawFileFormat)
        {
            throw new NotImplementedException();
        }

        public ICollection<RawFileElement> GetRawFiles()
        {
            throw new NotImplementedException();
        }

        public ICollection<SignatureFile> GetSignatureFiles()
        {
            throw new NotImplementedException();
        }

        public ICollection<SymbolSource> GetSymbolSources()
        {
            throw new NotImplementedException();
        }
    }
}
