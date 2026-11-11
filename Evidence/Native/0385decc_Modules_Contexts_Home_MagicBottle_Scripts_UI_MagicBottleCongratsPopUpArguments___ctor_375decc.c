/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUpArguments$$.ctor
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUpArguments___ctor (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUpArguments_o* __this, UnityEngine_Vector3_o magicBottleSpawnPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUpArguments$$.ctor
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUpArguments___ctor
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUpArguments_o* __this,
   UnityEngine_Vector3_o magicBottleSpawnPosition, const MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUpArguments___ctor_375decc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  puVar4 = PTR_DAT_0579a560;
  if ((bRam0000000005c33ba7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579a560);
    bRam0000000005c33ba7 = 1;
  }
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_4,0);
  *(undefined4 *)(param_4 + 0x24) = param_1;
  *(undefined4 *)(param_4 + 0x28) = param_2;
  *(undefined4 *)(param_4 + 0x2c) = param_3;
  puVar5 = (undefined8 *)(param_4 + 0x10);
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

