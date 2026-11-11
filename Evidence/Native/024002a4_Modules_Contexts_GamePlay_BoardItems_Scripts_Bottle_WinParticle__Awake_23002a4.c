/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WinParticle$$Awake
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__Awake (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WinParticle$$Awake
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__Awake
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__Awake_23002a4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_057e82e0;
  puVar4 = PTR_DAT_0577a558;
  if ((bRam0000000005c2a60c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e82e0);
    FUN_012d0dc8(PTR_DAT_0577a558);
    bRam0000000005c2a60c = 1;
  }
  uVar6 = UnityEngine_Component__GetComponent_object__27205b8(param_1,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  FUN_012d0d74();
  uVar6 = UnityEngine_Component__GetComponentsInChildren_object__2720890
                    (param_1,*(undefined8 *)puVar4);
  puVar7 = (undefined8 *)(param_1 + 0x18);
  *puVar7 = uVar6;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

