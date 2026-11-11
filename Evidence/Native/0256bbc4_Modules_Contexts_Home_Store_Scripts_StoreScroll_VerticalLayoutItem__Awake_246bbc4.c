/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.VerticalLayoutItem$$Awake
void Modules_Contexts_Home_Store_Scripts_StoreScroll_VerticalLayoutItem__Awake (Modules_Contexts_Home_Store_Scripts_StoreScroll_VerticalLayoutItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.VerticalLayoutItem$$Awake
   void Modules_Contexts_Home_Store_Scripts_StoreScroll_VerticalLayoutItem__Awake
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_VerticalLayoutItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_VerticalLayoutItem__Awake_246bbc4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_0575c660;
  if ((bRam0000000005c2b0e5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c660);
    bRam0000000005c2b0e5 = 1;
  }
  uVar5 = UnityEngine_Component__GetComponent_object__27205b8(param_1,*(undefined8 *)puVar4);
  puVar6 = (undefined8 *)(param_1 + 0x20);
  *puVar6 = uVar5;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

