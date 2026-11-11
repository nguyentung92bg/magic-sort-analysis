/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoPopUpArguments$$.ctor
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUpArguments___ctor (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUpArguments_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoPopUpArguments$$.ctor
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUpArguments___ctor
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUpArguments_o* __this, int32_t
   impressionSource, const MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUpArguments___ctor_375f3ac
               (long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  puVar4 = PTR_DAT_057ed288;
  if ((bRam0000000005c33bb4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ed288);
    bRam0000000005c33bb4 = 1;
  }
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_1,0);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  puVar5 = (undefined8 *)(param_1 + 0x10);
  *puVar5 = *(undefined8 *)puVar4;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

