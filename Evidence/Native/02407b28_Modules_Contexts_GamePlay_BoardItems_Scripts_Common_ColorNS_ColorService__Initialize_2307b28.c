/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ColorNS.ColorService$$Initialize
void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__Initialize (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ColorNS.ColorService$$Initialize
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__Initialize
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__Initialize_2307b28
               (long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar5 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2a658 & 1) == 0) {
                    /* try { // try from 02407b4c to 02507b57 has its CatchHandler @ 024077a0 */
    FUN_012d0dc8(PTR_DAT_057d9070);
                    /* try { // try from 02407b58 to 02507b5f has its CatchHandler @ 02407b6c */
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* catch() { ... } // from try @ 02407ae4 with catch @ 02407b60 */
    bRam0000000005c2a658 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02407b24 with catch @ 02407b6c
                       catch(type#2 @ 00000000) { ... } // from try @ 02407b58 with catch @ 02407b6c
                        */
  if ((((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar6 != 0)) &&
      (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar6,*(undefined8 *)PTR_DAT_057d9070), lVar6 != 0)) &&
     ((*(long *)(lVar6 + 0x18) != 0 &&
      (lVar6 = *(long *)(*(long *)(lVar6 + 0x18) + 0x10), lVar6 != 0)))) {
    iVar2 = *(int *)(lVar6 + 0x14);
    if (iVar2 == 2) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
    }
    else if (iVar2 == 1) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    puVar8 = (undefined8 *)(param_1 + 0x30);
    *puVar8 = uVar7;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

