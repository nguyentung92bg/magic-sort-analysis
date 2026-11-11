/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$<UpdateRainbow>b__55_0
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView___UpdateRainbow_b__55_0 (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0258b014) */
/* WARNING: Removing unreachable block (ram,0x0258b088) */
/* WARNING: Removing unreachable block (ram,0x0258b09c) */
/* WARNING: Removing unreachable block (ram,0x021ef33c) */
/* WARNING: Removing unreachable block (ram,0x021ef368) */
/* WARNING: Removing unreachable block (ram,0x021ef3b8) */
/* WARNING: Removing unreachable block (ram,0x021ef3d4) */
/* WARNING: Removing unreachable block (ram,0x021ef3d8) */
/* WARNING: Removing unreachable block (ram,0x021ef3ec) */
/* WARNING: Removing unreachable block (ram,0x021ef414) */
/* WARNING: Removing unreachable block (ram,0x021ef424) */
/* WARNING: Removing unreachable block (ram,0x021ef4a0) */
/* WARNING: Removing unreachable block (ram,0x021ef42c) */
/* WARNING: Removing unreachable block (ram,0x021ef458) */
/* WARNING: Removing unreachable block (ram,0x021ef464) */
/* WARNING: Removing unreachable block (ram,0x0258b01c) */
/* WARNING: Removing unreachable block (ram,0x021ef190) */
/* WARNING: Removing unreachable block (ram,0x021ef1b8) */
/* WARNING: Removing unreachable block (ram,0x021ef1fc) */
/* WARNING: Removing unreachable block (ram,0x021ef210) */
/* WARNING: Removing unreachable block (ram,0x021ef214) */
/* WARNING: Removing unreachable block (ram,0x021ef228) */
/* WARNING: Removing unreachable block (ram,0x021ef230) */
/* WARNING: Removing unreachable block (ram,0x021ef238) */
/* WARNING: Removing unreachable block (ram,0x021ef24c) */
/* WARNING: Removing unreachable block (ram,0x021ef258) */
/* WARNING: Removing unreachable block (ram,0x021ef264) */
/* WARNING: Removing unreachable block (ram,0x021ef298) */
/* WARNING: Removing unreachable block (ram,0x021ef2c8) */
/* WARNING: Removing unreachable block (ram,0x021ef2cc) */
/* WARNING: Removing unreachable block (ram,0x012d0d74) */
/* WARNING: Removing unreachable block (ram,0x0138e090) */
/* WARNING: Removing unreachable block (ram,0x0138e0b8) */
/* WARNING: Removing unreachable block (ram,0x0138e0c0) */
/* WARNING: Removing unreachable block (ram,0x0138e0c8) */
/* WARNING: Removing unreachable block (ram,0x021ef300) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$<UpdateRainbow>b__55_0
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView___UpdateRainbow_b__55_0
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView___UpdateRainbow_b__55_0_248c834
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000005c2b27e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0576e2b8);
    bRam0000000005c2b27e = 1;
  }
  uVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                    (param_1);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
       lVar2 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
      lVar2 = *(long *)(param_1 + 0x90);
      if (lVar2 != 0) {
        Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
                  (lVar2,0,0);
        Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__RestoreRainbowSpriteAlphas_20ef560
                  (lVar2);
        lVar2 = *(long *)(lVar2 + 0x20);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar2,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

